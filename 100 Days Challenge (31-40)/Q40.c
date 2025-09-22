//Q40 (Loops without Arrays/Strings)
//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
#include <string.h>

int main() {
    char binary[50], onesComplement[50];
    int i;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    for (i = 0; i < strlen(binary); i++) {
        if (binary[i] == '0')
            onesComplement[i] = '1';
        else if (binary[i] == '1')
            onesComplement[i] = '0';
        else {
            printf("Invalid binary number!\n");
            return 1;
        }
    }
    onesComplement[i] = '\0'; 

    printf("Original binary number: %s\n", binary);
    printf("1's complement: %s\n", onesComplement);

    return 0;
}
