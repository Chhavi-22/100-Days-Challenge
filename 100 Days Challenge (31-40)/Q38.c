//Q38 (Loops without Arrays/Strings)
//Write a program to find the sum of digits of a number.
#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;

    while (num != 0) {
        remainder = num % 10;   // extract last digit
        sum += remainder;       // add digit to sum
        num /= 10;              // remove last digit
    }

    printf("Sum of digits of %d = %d\n", original, sum);

    return 0;
}
