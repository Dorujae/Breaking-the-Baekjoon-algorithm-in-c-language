#include <stdio.h>

int main()
{
	int input;
	scanf_s("%d", &input);

	for (int i = 1; i <= input; i++)
	{
		for (int j = input; j >= i; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}