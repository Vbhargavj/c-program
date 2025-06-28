#include <stdio.h>

int main(void)
{
	// your code goes here
	int n;
	scanf("%d", &n);
	int a, b;

	for (int i = 0; i < n; i++)
	{
		int s = 0;
		scanf("%d%d", &a, &b);
		for (a; a > 0; a--)
		{
			b = (b * (b + 1)) / 2;
		}
		printf("%d\n", b);
	}
	return 0;
}
