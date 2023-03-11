#include<stdio.h>
int main(){
	int a,b;
	printf("enter cost price:");
	scanf("%d",&a);
	printf("enter selling price:");
	scanf("%d",&b);
	if(a>b)
		printf("loss amount=%d",a-b);
	else
	if(b>a)
		printf("profit amount=%d",b-a);
	
	return 0;
}
