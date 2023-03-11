#include<stdio.h>
int main(){
	int a[10],i,sum=0;
	for(i=0;i<10;i++){
		printf("enter element number%d:",i+1);
		scanf("%d", &a[i]);
		sum=sum+a[i];	
	}
	
	printf("sum of arrays number=%d",sum);
	return 0;
}
