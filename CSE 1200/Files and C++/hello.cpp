#include<bits/stdc++.h>
using namespace std;

int main() {
    int num;

    FILE *fptr;

    /*
    fptr = fopen("readme.txt", "w");

    scanf("%d", &num);

    fprintf(fptr, "%d", num);
    */

    /*
    fptr = fopen("readme.txt", "r");

    fscanf(fptr, "%d" &num);
    printf("%d", num);
    */

    //write
    /*
    fptr = fopen("readme.txt", "w");

    for(int i = 0; i < 5; i++) {
        scanf("%d", &num);

        fprintf(fptr, "%d\n", num);
    }
    */

    /*
    //read
    fptr = fopen("readme.txt", "r");

    for(int i = 0; i < 5; i++) {
        fscanf(fptr, "%d", &num);
        cout << num << endl;
    }
    */

    //read and write
    FILE *freadPtr;
    FILE *fwritePtr;

    freadPtr = fopen("readme.txt", "r");
    fwritePtr = fopen("readme.txt", "w");

    for(int i = 0; i < 5; i++) {
        cin >> num;
        fprintf(fwritePtr, "%d\n", num);
    }

    fflush(fwritePtr); //flushes the buffer which is occupied by fwritePtr

    for(int i = 0; i < 5; i++) {
        //this doesn't get exectuted as fscanf can't store the num in the buffer after retrieving from the file
        fscanf(freadPtr, "%d", &num);
        cout << num << endl;
    }
}
