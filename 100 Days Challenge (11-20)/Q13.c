//Q13 (Conditional Statements)
//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0) {
        printf("%d is a Leap Year.\n", year);
    } 
    else if (year % 100 == 0) {
        printf("%d is Not a Leap Year.\n", year);
    } 
    else if (year % 4 == 0) {
        printf("%d is a Leap Year.\n", year);
    } 
    else {
        printf("%d is Not a Leap Year.\n", year);
    }

    return 0;
} 
