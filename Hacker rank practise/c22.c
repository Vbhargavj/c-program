#include <stdio.h>
int fact(int n)
{
	if (n < 2)
		return n;
	else
		return n * fact(n - 1);
}
int main(void)
{
	int n, m;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &m);
		printf("%d\n", fact(m));
	}
	return 0;
}
