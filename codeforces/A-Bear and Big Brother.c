#include <stdio.h>

int main(void)
{
	int a, b, y = 0;
	scanf("%d %d", &a, &b);

	for (;a <= b; y++)
	{
		a *= 3;
		b *= 2;
	}

	printf("%d", y);

	return 0;
}