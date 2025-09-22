//Q52 (Nested Loops without Arrays/Strings)
//Write a program to print the following pattern:

//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*


#include <stdio.h>

int main() {
    int i, j;
    int rows[] = {1, 3, 5, 3, 1};  
    int groups = 5;

    for (i = 0; i < groups; i++) {
        for (j = 1; j <= rows[i]; j++) {
            printf("*\n");
        }
        if (i != groups - 1) 
            printf("\n");
    }

    return 0;
}
