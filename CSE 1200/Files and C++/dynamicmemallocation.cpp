#include<bits/stdc++.h>
using namespace std;

int main() {
    //int arr[5]; //compile time declaration

    int x;

    cin >> x; //it's taken from run time

    //int arr[x]; //though size is dynamic but it is not dynamic memory allocation as it is stored in stack

    //dynamic memory is stored in heap
    //static memory is stored in stack

    int *arr;

    // malloc can contain some garbage values
    //arr = (int*)malloc(sizeof(int)*x); //it will return a void type pointer

    //calloc will initialize all the values with 0
    arr = (int*)calloc(sizeof(int), x);

    for (int i = 0; i < x; i++)
    {
        cout << *(arr+i) << endl;
    }

    realloc(arr, sizeof(int)*(x+5));

    for(int i = 0; i < x; i++) {
        cout << *(arr+i) << endl;
    } 
    
    return 0;
}