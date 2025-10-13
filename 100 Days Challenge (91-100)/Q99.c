//Q99 (Strings)
//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char date[20];
    int day, month, year;

    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    fgets(date, sizeof(date), stdin);

    date[strcspn(date, "\n")] = '\0';

    if (sscanf(date, "%d/%d/%d", &day, &month, &year) != 3) {
        printf("Invalid date format!\n");
        return 1;
    }

    if (month < 1 || month > 12) {
        printf("Invalid month!\n");
        return 1;
    }

    printf("Formatted date: %02d-%s-%04d\n", day, months[month - 1], year);

    return 0;
}
