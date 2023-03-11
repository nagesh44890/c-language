#include<stdio.h>
int main(){
	int n;
	printf("enter year:");
	scanf("%d",&n);
	if(n%4==0){
		printf("it is a leap year");	
	}
	else{
		printf("it is a common year");	
	}
	return 0;	
}
