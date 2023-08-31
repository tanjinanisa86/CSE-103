#include<stdio.h>
int max(int a,int b){
	int r;
	if (a>b){
		r=a;
	}
	else{
	r=b;
	}
return r;
}
int main(){
	int p;
	p=max(3,4);
	printf("The maximum value is: %d\n", p);
return 0;
}
