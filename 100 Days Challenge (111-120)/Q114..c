//Q114.Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int lastIndex[256]; 
    int i, start = 0, maxLen = 0;

    printf("Enter a string: ");
    scanf("%s", s);

    for (i = 0; i < 256; i++)
        lastIndex[i] = -1;

    for (i = 0; i < strlen(s); i++) {
        if (lastIndex[(unsigned char)s[i]] >= start)
            start = lastIndex[(unsigned char)s[i]] + 1;

        lastIndex[(unsigned char)s[i]] = i;
        if (i - start + 1 > maxLen)
            maxLen = i - start + 1;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);
    return 0;
}

