#include <stdio.h>

int main()
{

		int a, b, c, d;
		scanf_s("%d %d %d", &a, &b, &c);
		scanf_s("%d", &d);

		int clock, hour, min, sec;
		clock = (a * 3600) + (b * 60) + c + d;
		hour = clock / 3600;
		min = clock % 3600 / 60;
		sec = clock % 3600 % 60;

		if (hour > 23)
			hour = hour % 24;

		printf("%d %d %d\n", hour, min, sec);

		return 0;
}