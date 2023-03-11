#include <stdio.h>

int main()
{
    int i, j, rows, alphabet = 65;
    
    printf("Enter Right Triangle Alphabets Pattern Rows = ");
    scanf("%d",&rows);

    printf("The Right Angled Triangle Alphabets Pattern\n"); 
    
	for (i = 0 ; i < rows; i++ ) 
	{
		for (j = 0 ; j <= i; j++ ) 	
		{
			printf("%c ", alphabet + j);
		}
		printf("\n");
	}

    return 0;
}
