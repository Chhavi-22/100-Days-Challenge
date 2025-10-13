//Q94 (Strings)
//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    char word[100], longest[100] = "";
    int i = 0, j = 0, maxLen = 0, len;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    while (str[i] != '\0') {
        if (isalpha(str[i])) {         
            word[j++] = str[i];
        } else {                       
            if (j != 0) {
                word[j] = '\0';
                len = strlen(word);
                if (len > maxLen) {
                    maxLen = len;
                    strcpy(longest, word);
                }
                j = 0; 
            }
        }
        i++;
    }

    if (j != 0) {
        word[j] = '\0';
        len = strlen(word);
        if (len > maxLen) {
            maxLen = len;
            strcpy(longest, word);
        }
    }

    if (maxLen > 0)
        printf("Longest word: %s\nLength: %d\n", longest, maxLen);
    else
        printf("No valid word found.\n");

    return 0;
}
