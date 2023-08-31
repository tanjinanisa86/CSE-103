#include<stdio.h>
int findmax(int numbers[], int size){
	int max=numbers[0];
	int i;
	for(i=1;i<size;i++){
		if(numbers[i]>max){
			max=numbers[i];
		}
	}
	return max;
}
int main(){
	int numCount;
	printf("Enter the number of elements : ");
	scanf("%d",&numCount);
	int numbers[numCount];
	printf("Enter %d numbers : \n",numCount);
	int i;
	for(i=0;i<numCount;i++){
		scanf("%d",&numbers[i]);
	}
	int maxValue=findmax(numbers, numCount);
	printf("The maximum value is: %d\n",maxValue);
return 0;
}
