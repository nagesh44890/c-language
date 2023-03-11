#include<stdio.h>
int main(){
	int a,b,r;
	printf("enter num1:");
	scanf("%d",&a);
	printf("enter num2:");
	scanf("%d",&b);
	printf("remainder of %d divided by %d =%d",a,b,r=a%b);
	return 0;
}
