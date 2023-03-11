#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	printf("enter base:");
	scanf("%d",&a);
	printf("enter power:");
	scanf("%d",&b);
	int q=pow(a,b);
	printf("%d",q);
	return 0;
}
