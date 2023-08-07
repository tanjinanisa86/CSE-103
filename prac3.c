#include <stdio.h>

int main() {
    int n, count = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (count <= n) {
        printf("%d ", count);
        count++;
    }

    return 0;
}

//write a c program using while loop that will print first n natural number upwards 
