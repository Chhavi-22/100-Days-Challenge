//Q113.Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
#include <stdio.h>

void sort(int arr[], int n) {
    int temp;
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter k (to find kth smallest element): ");
    scanf("%d",&k);

    sort(arr, n);

    if(k>=1 && k<=n)
        printf("The %dth smallest element is: %d\n", k, arr[k-1]);
    else
        printf("Invalid value of k!\n");
    return 0;
}
