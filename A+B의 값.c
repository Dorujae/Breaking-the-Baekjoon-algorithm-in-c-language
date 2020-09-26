#include <stdio.h>

int main()
{
	int A, B;
	scanf_s("%d %d", &A, &B);

	if (A > 0 && B < 10)
		printf("%d", A + B);
	else
		printf("A가 0 이하거나 B 가 10 이상입니다!");

	return 0;
}