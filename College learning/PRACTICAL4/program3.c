#include <stdio.h>
#define N 10
int main()
{
    int n[N], even = 0, odd = 0;
    printf("Enter the values");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &n[i]);
    }

    for (int j = 0; j < N; j++)
    {
        if (n[j] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("\nEven is %d",even);
    
    printf("\nODD is %d",odd);
    return 0;
}