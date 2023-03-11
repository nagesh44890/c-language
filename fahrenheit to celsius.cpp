#include<stdio.h>
int main(){
	float f;
	printf("enter temperature in fahrenheit:");
	scanf("%f",&f);
	printf("temperature in celsius:%f",(f-32)*5/9);
	return 0;
}
