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

    int target;
    printf("Enter the number to search for: ");
    scanf("%d", &target);

    int found = 0;
    int index = -1; 
    int left = 0;
    int right = n - 1;
    for (i = left; i <= right; ) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            found = 1;
            index = mid;
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (found) {
        printf("The number %d was found at index %d\n", target, index);
    } else {
        printf("The number %d was not found in the array\n", target);
    }

    return 0;
}
