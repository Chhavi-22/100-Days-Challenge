//Q112 (Logic Enhancers)
//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>
#include <limits.h>  
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max_sum = INT_MIN;
    int current_sum = 0;

    for (int i = 0; i < n; i++) {
        current_sum += arr[i];

        if (current_sum > max_sum)
            max_sum = current_sum;

        if (current_sum < 0)
            current_sum = 0;
    }

    printf("Maximum subarray sum: %d\n", max_sum);
    return 0;
}
