#include<stdio.h>

int main() {
    
    int arr[], n,sum =0;
    int i;
    
    printf("Enter student number :");
    scanf("%d", &n);
    for(i=0;i < n;i++){
        printf("%d:", i+1);
        scanf("%d", &arr[i]);
    }
    float average;
    for(i=0;i < n;i++){
        sum += arr[i];
    }
    average = sum/n;
    printf("The average of students mark : %f", average);

    return 0;
}
