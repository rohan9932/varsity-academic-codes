#include<bits/stdc++.h>
using namespace std;


int main() {
    int arr1[5];
    int arr2[5];
    for(int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        arr1[i] = n;
    }

    //store in file
    ofstream fout;
    fout.open("arrFile.bin", ios::binary);
    fout.write((char*)(arr1), sizeof(int)*5);
    fout.close();

    //read from file
    ifstream fin;
    fin.open("arrFile.bin", ios::binary);
    fin.get((char*)(arr2), sizeof(int)*5);
    fin.close();

    //print arr2
    for(int i = 0; i < 5; i++) {
        cout << arr2[i] << endl;
    }

    
    return 0;
}