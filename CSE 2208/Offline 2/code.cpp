#include <iostream>
#include <chrono>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// OS-Specific Headers for Memory Tracking
#if defined(_WIN32)
    #include <windows.h>
    #include <psapi.h>
#elif defined(__APPLE__)
    #include <mach/mach.h>
#elif defined(__linux__)
    #include <sys/resource.h>
    #include <fstream>
    #include <unistd.h>
#endif

// Constants
constexpr double CPU_POWER_WATTS = 10.0;
constexpr double BD_EMISSION_FACTOR = 0.62; // kg CO₂ / kWh

// Cross-platform function to get Peak RSS (Resident Set Size) in KB
size_t getPeakMemoryKB() {
#if defined(_WIN32)
    PROCESS_MEMORY_COUNTERS pmc;
    if (GetProcessMemoryInfo(GetCurrentProcess(), &pmc, sizeof(pmc))) {
        return pmc.PeakWorkingSetSize / 1024;
    }
#elif defined(__APPLE__)
    struct mach_task_basic_info info;
    mach_msg_type_number_t count = MACH_TASK_BASIC_INFO_COUNT;
    if (task_info(mach_task_self(), MACH_TASK_BASIC_INFO, (task_info_t)&info, &count) == KERN_SUCCESS) {
        return info.resident_size_max / 1024; // macOS returns max bytes
    }
#elif defined(__linux__)
    struct rusage usage;
    if (getrusage(RUSAGE_SELF, &usage) == 0) {
        return usage.ru_maxrss; // Linux returns maxrss in KB directly
    }
#endif
    return 0;
}


vector<string> loadFile(const string& filename) {
    ifstream file(filename);
    vector<string> words;
    
    if (!file.is_open()) {
        cerr << "Error: Could not open file " << filename << endl;
        return words;
    }

    int count = 0;
    if (file >> count) {
        // Clear the leftover newline character right after the number 100
        string dummy;
        getline(file, dummy);
        
        // Reserve memory space for efficiency
        words.reserve(count);
        
        string word;
        while (getline(file, word)) {
            // Only add lines that actually contain characters
            if (!word.empty()) {
                words.push_back(word);
            }
        }
    }
    return words;
}

// ----- Algorithms --------- //
int linearSearch(vector<string>& searchSpace, int n, string word) {
    for(int i = 0; i < n; i++) {
        if(searchSpace[i] == word) {
            return 1;
        }
    }
    return -1;
}

int binarySearch(vector<string>& searchSpace, int n, string word) {
    int low = 0, high = n-1;

    while(low <= high) {
        int mid = (low+high)/2;
        if (searchSpace[mid] == word) {
            return 1;
        } else if(searchSpace[mid] > word) {
            high = mid-1;
        } else {
            low = mid + 1;
        }
    }

    return -1;
}


int main() {
    // Read from both files
    vector<string> searchSpace = loadFile("searchspace.txt");
    vector<string> wordSpace = loadFile("wordspace.txt");

    int n = searchSpace.size();

    // Verify the files loaded successfully
    if (searchSpace.empty() || wordSpace.empty()) {
        cerr << "Error loading files. Check if they exist in the correct directory.\n";
        return 1;
    }

    cout << "Successfully loaded " << searchSpace.size() << " words into searchSpace.\n";
    cout << "Successfully loaded " << wordSpace.size() << " words into wordSpace.\n";


    // High-resolution cross-platform timer
    auto start = chrono::high_resolution_clock::now();

    // -------- Your algorithm here --------
    for (string word: wordSpace) {
        // linearSearch(searchSpace, n, word);
        binarySearch(searchSpace, n, word);
    }
    // -------------------------------------

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsed = end - start;

    // Calculations
    double elapsed_seconds = elapsed.count();
    double energy = CPU_POWER_WATTS * elapsed_seconds; // Joules
    double energy_kWh = energy / 3.6e6;                // kWh
    double co2 = energy_kWh * BD_EMISSION_FACTOR;      // kg CO₂

    // Print Results
    cout << "Execution time: " << elapsed_seconds << " seconds\n";
    cout << "Estimated energy consumption: " << energy << " Joules\n";
    
    size_t peakMem = getPeakMemoryKB();
    if (peakMem > 0) {
        cout << "Peak Memory Usage: " << peakMem << " KB\n";
    } else {
        cout << "Failed to get memory info.\n";
    }
    
    // Using printf-style formatting for scientific precision of CO2
    printf("Estimated CO2 emissions (Bangladesh): %.8f kg\n", co2);

    return 0;
}