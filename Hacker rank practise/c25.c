#include <stdio.h>

int main(void)
{
    // your code goes here
    long long int n, v, b;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &v, &b);
        for (int j = 0; v >= 0; j++)
        {
            v = v - b;
        }
        
        printf("%d\n", v+b);
    }
    return 0;
}
