#include <iostream>
#include <chrono>
#include <vector>
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
    #include <unistd.h>
#endif

// Constants
constexpr double CPU_POWER_WATTS = 65.0;
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



// ----------- Sorting algos ----------------- //

// insertion sort
void insertion_sort(vector<int>& arr, int n) {
    for(int i = 1; i < n; i++) {
        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr) {
            arr[prev+1] = arr[prev]; //right shift
            prev--;
        }

        arr[prev+1] = curr;
    }
}


// merge sort
void merge(vector<int>& arr, int st, int mid, int end) {
    vector<int> temp;

    int i = st, j = mid+1;

    while (i <= mid && j <= end) {
        if (arr[i] < arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // push remaining values(if present)
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    //copy temp values to main array
    for (int i = 0; i < temp.size(); i++) {
        arr[st+i] = temp[i]; 
    }
}


void merge_sort(vector<int>& arr, int st, int end) {
    if (st < end) {
        int mid = (st + end) / 2;
        merge_sort(arr, st, mid);
        merge_sort(arr, mid+1, end);
        merge(arr, st, mid, end);
    }
}


// quick sort
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low]; // first element as pivot
    int i = low, j = high;

    while (i < j) {
        while (arr[i] <= pivot && i < high) {
            i++;
        } 
        while (arr[j] > pivot && j > low) {
            j--;
        }

        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);
    return j;
}

void quick_sort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quick_sort(arr, low, pivot-1);
        quick_sort(arr, pivot+1, high);
    }
}


int main() {
    // reading from the file
    vector<int> numbers;
    numbers.reserve(100000);

    int n = 100000; // 10^5
    
    ifstream file("sorted_random.txt");

    int temp_num;

    while(file >> temp_num) {
        numbers.push_back(temp_num);
    }

    file.close();

    // High-resolution cross-platform timer
    auto start = chrono::high_resolution_clock::now();

    // -------- Your algorithm here --------
    // insertion_sort(numbers, n);
    // merge_sort(numbers, 0, n-1);
    quick_sort(numbers, 0, n-1);
    // -------------------------------------

    auto end = std::chrono::high_resolution_clock::now();
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