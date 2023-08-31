#include<stdio.h>
int isLeapYear(int year){
	if((year%4==0&&year%100==0)||year%400==0){
		return 1;
	}else{
		return 0;
	}
}
int daysInYear(int year){
	if(isLeapYear(year)){
		return 366;
	}else{
		return 365;
	}
}
int main(){
	int year;
	printf("Enter a year : ");
	scanf("%d",&year);
	int numDays = daysInYear(year);
	printf("Number of days in %d : %d\n",year,numDays);
	if(isLeapYear(year)){
		printf("%d is a leap year.\n",year);
	}else{
		printf("%d is not a leat year.\n",year);
	}
return 0;
}
