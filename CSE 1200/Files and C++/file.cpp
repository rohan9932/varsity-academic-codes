#include<bits/stdc++.h>
using namespace std;

//File is a pattern stored in disk
// we write <iostream> -> here stream is an interface to transfer data

/*
    The useful classes for working with files in c++ are:
    1. fstreambase
    2. ifstream -> input fstream , derived from fstreambase
    3. ofstream -> output fstream , derived from fstreambase
*/

int main() {
    int n;
    cin >> n; //take input from keyboard using cin

    cout << n << endl; //outputs  on console/monitor using cout 

    // //Opening file using constructor
    // ofstream fout("hello.txt"); //we are connecting our file to an output (write in file)  stream named fout
    // fout << "Hello World\n"; 

    // string st, st2;

    // ifstream fin("hello.txt"); //we are connecting our file to an input stream named fin 
    // //fin >> st >> st2;

    // getline(fin, st);

    // cout << st << endl;

    // ofstream fout("hello3.txt"); //will create file if not created
    string name;
    // cin >> name;

    // fout << "Hello! My name is " + name << endl;

    ifstream fin("hello3.txt");
    

    while(!fin.eof()) { //will read until the end of file
        getline(fin, name);
        cout << name << endl;
    }

    //fout.close();
    fin.close();
    
    return 0;
}