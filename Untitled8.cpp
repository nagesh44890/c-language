#include<stdio.h>
int main(){
	int a[3][3],i,j;
	for(i=0;i<3;i++){
	
	for(j=0;j<3;j++){
		printf("enter value of 2D array:");
		scanf("%d",&a[i][j]);
	}
}
printf("2D array are:");
for(i=0;i<3;i++){
	printf("\n");
for(j=0;j<3;j++)
printf("%d  ",a[i][j]);	
}	return 0;
}
