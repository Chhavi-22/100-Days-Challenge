//Q120.Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);  
    int new_sentence = 1; 

    for (int i = 0; str[i] != '\0'; i++) {
        if (new_sentence && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            new_sentence = 0;
        } 
        else {
            str[i] = tolower(str[i]);
        }

        if (str[i] == '.' || str[i] == '!' || str[i] == '?')
            new_sentence = 1;
    }

    printf("%s", str);
    return 0;
}
