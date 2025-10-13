//Q98 (Strings)
//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[1000];
    int i, len;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    len = strlen(name);

    printf("Formatted name: ");

    
    for (i = 0; i < len; i++) {
        
        if (i == 0 && isalpha(name[i])) {
            printf("%c. ", toupper(name[i]));
        }
        
        else if (name[i] == ' ' && i + 1 < len && isalpha(name[i + 1])) {
           
            int j;
            for (j = i + 1; j < len; j++) {
                if (name[j] == ' ')
                    break;
            }
            if (j == len) { 
                printf("%s", &name[i + 1]);
                break;
            } else {
                printf("%c. ", toupper(name[i + 1]));
            }
        }
    }

    printf("\n");

    return 0;
}
