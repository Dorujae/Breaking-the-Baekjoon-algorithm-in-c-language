#include <stdio.h>

int main()
{
	int input;
	scanf_s("%d", &input);

	for (int i = 1;i < input;i++) 
	{
		for (int j = 0;j < i;j++)
		{
			printf("*");
		}
		for (int j = 0;j < 2 * input - 2 * i;j++)
		{
			printf(" ");
		}
		for (int j = 0;j < i;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int i = input;i > 0;i--) 
	{
		for (int j = 0;j < i;j++)
		{
			printf("*");
		}
		for (int j = 0;j < 2 * input - 2 * i;j++)
		{
			printf(" ");
		}
		for (int j = 0;j < i;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}