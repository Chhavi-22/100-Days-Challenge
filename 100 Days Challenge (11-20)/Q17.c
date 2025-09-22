//Q17 (Conditional Statements)
//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation (a cannot be zero).\n");
    } else {
        discriminant = (b * b) - (4 * a * c);

        if (discriminant > 0) {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are Real and Distinct: %.2f and %.2f\n", root1, root2);
        } 
        else if (discriminant == 0) {
            root1 = root2 = -b / (2 * a);
            printf("Roots are Real and Equal: %.2f and %.2f\n", root1, root2);
        } 
        else {
            float realPart = -b / (2 * a);
            float imagPart = sqrt(-discriminant) / (2 * a);
            printf("Roots are Imaginary: %.2f + %.2fi and %.2f - %.2fi\n",
                   realPart, imagPart, realPart, imagPart);
        }
    }

    return 0;
}
