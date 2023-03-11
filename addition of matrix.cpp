#include<stdio.h>
int main(){
	int a[2][2],b[2][2];
	printf("enter values for first matrix:");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("\nenter value for 2D array:");
			scanf("%d",&a[i][j]);	
		}
	}
	printf("the first matrix is:");
	for(int i=0;i<2;i++){
		printf("\n");
		for(int j=0;j<2;j++)
		printf("%d  ",a[i][j]);
	}
		printf("\nenter values for second matrix:");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("\nenter value for 2D array:");
			scanf("%d",&b[i][j]);		
		}
	}
	printf("the second matrix is:");
	for(int i=0;i<2;i++){
		printf("\n");
		for(int j=0;j<2;j++)
		printf("%d  ",b[i][j]);
	}
	int c[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n addition of matrix is:");
	for(int i=0;i<2;i++){
		printf("\n");
		for(int j=0;j<2;j++){
			printf("%d  ",c[i][j]);
		}
	}
	return 0;
}
