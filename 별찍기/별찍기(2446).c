#include <stdio.h>

int main()
{
	int input;
	scanf_s("%d", &input);

	for (int i = 0; i < input; i++) 
	{
		for (int j = 0; j < i; j++) 
		{
			printf(" ");
		}
		for (int k = (input - i - 1) * 2; k >= 0; k--) 
		{
			printf("*"); 
		}
		printf("\n");
	}
	for (int i = 2; i <= input; i++) 
	{
		for (int j = 1; j <= input - i; j++) 
		{
			printf(" "); 
		}
		for (int k = 0; k <= (i - 1) * 2; k++)
		{
			printf("*"); 
		}
		printf("\n");
	}

	return 0;
}
