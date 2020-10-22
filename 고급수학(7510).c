#include <stdio.h>

int main()
{
	int input, a, b, c;
	scanf_s("%d", &input);
	int figure = 0;

	for (int i = 1; i <= input; i++)
	{
		scanf_s("%d %d %d", &a, &b, &c);

		if ((a * a) == (b * b) + (c * c) || (b * b) == (a * a) + (c * c) ||
			(c * c) == (b * b) + (a * a))
			figure = 1;
		else
			figure = 0;

		printf("Scenario #%d:\n", i);

		if (figure == 1)
			printf("yes\n\n");
		else
			printf("no\n\n");
	}

	return 0;
}