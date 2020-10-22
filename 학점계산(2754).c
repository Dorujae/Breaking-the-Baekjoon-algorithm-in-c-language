#include <stdio.h>

int main() 
{
	char score, num;
	score = getchar(), num = getchar();
	double point = 0;
	if (score == 'A')
		point += 4;
	else if (score == 'B')
		point += 3;
	else if (score == 'C')
		point += 2;
	else if (score == 'D')
		point += 1;
	else if (score == 'F')
		point = 0.0;
	if (num == '+')
		point += 0.3;
	else if (num == '0')
		point += 0.0;
	else if (num == '-')
		point -= 0.3;

	printf("%.1lf", point);

	return 0;
}