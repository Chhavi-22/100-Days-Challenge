#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int freq[26] = {0};  
    int i;
    char firstRepeating = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {  
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) {  
                firstRepeating = ch;
                break;
            }
        }
    }

    if (firstRepeating != '\0')
        printf("First repeating lowercase alphabet: %c\n", firstRepeating);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
