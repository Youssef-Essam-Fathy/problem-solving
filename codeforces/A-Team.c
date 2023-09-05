#include <stdio.h>
/*
3 -> n
1 1 0 -> p v t
1 1 1 -> p v t
1 0 0 -> p v t
*/
int main(void)
{
	int n, ansn = 0;
	scanf("%d", &n);
	while(n--)
	{
		int  p, v, t;
		scanf("%d %d %d", &p, &v, &t);
		if ((p + v + t) >= 2) ansn++;
	}

	printf ("%d", ansn);
	return 0;
}