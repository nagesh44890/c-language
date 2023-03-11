#include<stdio.h>
int main(){
	int a,b;
	printf("enter num1:");
	scanf("%d",&a);
	printf("enter num2:");
	scanf("%d",&b);
	printf("addition of %d and %d = %d",a,b,a+b);
	printf("\nsubtracton of %d from %d = %d",b,a,a-b);
	printf("\nmultiplication of %d and %d = %d",a,b,a*b);
	printf("\nquotient on division of %d by %d = %d",a,b,a/b);
	printf("\nremainder on division of %d by %d = %d",a,b,a%b);
	return 0;
	}
