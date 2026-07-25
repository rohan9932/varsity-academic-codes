#include <stdio.h>

int main() {
    // char s1[5] = "AUST";
    // char s2[5] = {'A', 'U', 'S', 'T'};
    // char s3[5];
    // s3[0] = 'A';
    // s3[1] = 'U';
    // s3[2] = 'S';
    // s3[3] = 'T';
    // s3[4] = '\0';

    // printf("%s %s %s\n", s1, s2, s3);

    // char s4[20];
    // // scanf("%s", s4);
    // gets(s4); // takes input of a string(with all spaces)
    // printf("%s", s4);

    char s1[] = "AUST";
    char s2[] = "Computer Science and Engineering";

    printf("Before strcpy\n");
    printf("%s\n", s1);
    printf("%s\n", s2);

    strrev(s1); // reverse a string

    strcat(s1, s2); // strcpy(target, source) strcat(s1, s2) concatenates two strings

    printf("After strcpy\n");
    printf("%s\n", s1);
    printf("%s\n", s2);


    char st[] = "Hello";
    strupr(st);
    strlwr(st);

    printf("%s\n", st);


    //strcmp
    //src = tar -> 0   // str 1 - str 2
    //src > tar -> -1
    //tar > src -> 1




    return 0;
}
