#include<stdio.h>
Like(){
	printf("Like ");
}
int main(){
	int i,x;
	scanf("%d",&x);
	printf("I ");
	for(i=1;i<=x;i++){
	Like();
	}
	printf("You.");
return 0;
}
