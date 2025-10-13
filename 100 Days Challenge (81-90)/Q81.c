//Q81 (Strings)
//Count characters in a string without using built-in length functions.
#include <stdio.h>

int count_chars_no_len(const char *s) {
    int count = 0;
    while (s[count] != '\0') {
        count++;
    }
    return count;
}

int main(void) {
    char buf[1000];

    printf("Enter a line: ");
    if (!fgets(buf, sizeof buf, stdin)) return 0;

    int i = 0;
    while (buf[i] != '\0') {
        if (buf[i] == '\n') { buf[i] = '\0'; break; }
        i++;
    }

    int len = count_chars_no_len(buf);
    printf("Character count: %d\n", len);
    return 0;
}
