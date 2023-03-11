#include<stdio.h>
int main(){
	int a;
	printf("enter a:");
	scanf("%d",&a);
		int b;
	printf("enter b:");
	scanf("%d",&b);
	int c;
	c=a;
	a=b;
	b=c;
	printf("the value of a is=%d",a);
	printf("\nthe value of b is=%d",b);
	return 0;
}  
