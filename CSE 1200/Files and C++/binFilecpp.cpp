#include<bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int id;

    Student() {

    }

    Student(string name, int id) {
        this->name = name;
        this->id = id;
    }
};

int main() {
    struct Student st1("Shakib", 21);
    struct Student st2;

    //write files in a binary file
    ofstream fout;
    fout.open("BinaryFile.bin", ios::binary); //we need to specify with extra ios::binary that it's a binary file
    fout.write((char*)(&st1), sizeof(struct Student)); //params: entity, size we want to allocate
    //in c++ we need to store every type of data in char. so we typecast every entity to char before storing
    fout.close();

    //read files in a binary file
    ifstream fin;
    fin.open("BinaryFile.bin", ios::binary);
    fin.get((char*)(&st2), sizeof(struct Student));
    fin.close();

    cout << st2.name << " " << st2.id << endl;

    // int arr[5];
    // for(int i = 0; i < 5; i++) {
    //     int num;
    //     cin >> num;
    //     arr[i] = num;
    // }

    // ofstream fout;
    // fout.open("Test.bin", ios::binary);
    // for(int i = 0; i < 5; i++) {
    //     fout << arr[i] << " ";
    // }
    // fout.close();

    // int *arr2 = new int[5];
    // ifstream fin;
    // fin.open("Test.bin", ios::binary);
    // for(int i = 0; i < 5; i++) {
    //     fin >> arr2[i];
    // }
    // fin.close();

    // for(int i = 0; i < 5; i++) {
    //     cout << arr2[i] << endl;
    // }

    return 0;
}