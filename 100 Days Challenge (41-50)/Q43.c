//Q43 (Loops without Arrays/Strings)
//Write a program to check if a number is a strong number.
#include <stdio.h>

int factorial(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, original, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // Store original number

    while (num > 0) {
        remainder = num % 10;
        sum += factorial(remainder);
        num /= 10;
    }

    if (sum == original) {
        printf("%d is a Strong Number.\n", original);
    } else {
        printf("%d is NOT a Strong Number.\n", original);
    }

    return 0;
}
