#include <stdio.h>

int main() {
    int n,i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers separated by spaces:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the number to search for: ");
    scanf("%d", &target);

    int found = 0; 
    int index = -1; 
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1;
            index = i;
            break;
        }
    }
    if (found) {
        printf("The number %d was found at index %d\n", target, index);
    } else {
        printf("The number %d was not found in the array\n", target);
    }

    return 0;
}
