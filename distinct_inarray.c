#include <stdio.h>

int main() {
    int n,i; 
    printf("Enter the size of the sorted array: ");
    scanf("%d", &n);

    int arr[n]; 
    printf("Enter %d sorted integers separated by spaces:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int distinctCount = 1; 
    for (i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            distinctCount++;
        }
    }
    printf("Number of distinct elements: %d\n", distinctCount);

    return 0;
}
