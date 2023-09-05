#include <stdio.h>

int main(void)
{
	int A = 0, D = 0, n, i;
	scanf("%d", &n); // int -> 6
	char arr[n];
	scanf("%s", arr); // string -> A | D

	for (i = 0; i < n; i++)
		arr[i] == 'A' ? A++ : D++;

	//A < D | A = D | A > D
	printf((A > D) ? "Anton" : ((A == D) ? "Friendship" : "Danik"));

	return 0;
}
