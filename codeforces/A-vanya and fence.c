#include <stdio.h>

int main(void)
{
	int n, h, p, sum = 0;

	scanf("%d %d", &n, &h);

	while (n--)
	{
		scanf("%d", &p);
		(p > h) ? sum += 2 : sum++;
	}
	printf("%d", sum);

	return 0;
}