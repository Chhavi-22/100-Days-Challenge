//Q44 (Loops without Arrays/Strings)
//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    int numerator = 1, denominator = 1;
    
    for (i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;

        numerator += 2;
        if (i == 1)
            denominator += 3; // from 1 to 4
        else
            denominator += 2; // then 4,6,8,...
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}
