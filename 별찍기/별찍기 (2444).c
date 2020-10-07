#include <stdio.h>

int main()
{
	int input;
	scanf_s("%d", &input);

	for (int i = 1; i <= input; i++)
	{
		for (int j = input - 1; j >= i; j--)
		{
			printf(" ");
		}
		for (int k = 1; k <= i * 2 - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int l = 1; l <= input - 1; l++)
	{
		for (int m = 1; m <= l; m++)
		{
			printf(" ");
		}
		for (int n = input * 2 - 1; n >= l * 2 + 1; n--)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
