#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	// your code goes here
	int n;
	scanf("%d", &n);

	int *ary = (int*)malloc(n * 3 * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &ary[i * 3 + j]);
		}
	}
	for (int i = 0; i < n; i++)
	{

		if ((float)(ary[i * 3] + ary[i * 3 + 1]) / 2 > ary[i * 3 + 2])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}

	return 0;
}