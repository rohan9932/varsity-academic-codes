#include<bits/stdc++.h>
using namespace std;

struct Student {
    char name[50];
    int weight;
};

int main() {
    struct Student stud1[2], stud2[2];

    FILE *fptr;

    fptr = fopen("readme.bin", "wb");

    for(int i = 0; i < 2; i++) {
        fflush(stdin);
        cout << "Enter name: ";
        cin >> stud1[i].name;

        cout << "Enter Weight: ";
        cin >> stud1[i].weight;

    }

    //fwrite(stud1, sizeof(stud1), 1, fptr); //Arguments: var, size of the block, number of blocks, file ptr
    fwrite(stud1, sizeof(struct Student), 2, fptr);

    fclose(fptr);

    fptr = fopen("readme.bin", "rb");

    fread(stud2, sizeof(struct Student), 2, fptr);

    for(int i = 0; i < 2; i++) {
        cout << "Name: " << stud2[i].name << " " << "Weight: " << stud2[i].weight << endl;
    }
}
