#include<bits/stdc++.h>
using namespace std;

int main() {
    //taking input from the user
    int arr[5];
    for(int i = 0; i < 5; i++) {
        int num;
        cin >> num;
        arr[i] = num;
    }

    //write in the file
    ofstream fout; //we create a object of ofstream class to write into file
    fout.open("filePractice.txt"); //open file
    for(int i = 0; i < 5; i++) {
        fout << arr[i] << " ";
    }
    fout.close();

    //read from the file
    ifstream fin; //we create a object of ifstream class to read from file
    fin.open("filePractice.txt");

    int* arr2 = new int[5]; //creating an array dynamically of 5 int size in heap and pointing
    //it throught arr2 pointer 
    for(int i = 0; i < 5; i++) {
        int num2;
        fin >> num2;
        arr2[i] = num2;
    }
    fin.close();

    for(int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    } 
    cout << endl;

    delete[] arr2; //need to delete the 5 int storage from the memory after usage manually

    return 0;
}