#include <stdio.h>

int main()
{

    int n;
    printf("Enter mathematisc mark");
    scanf("%d", &n);
    int sum = 0, count = 0;

    while (1)
    {
        if (n == 0)
        {
            break;
        }
        else
        {
            scanf("%d", &n);
            sum = sum + n;
            count++;
        }
    }
    count=count-1;
    printf("%d", sum / count);

    return 0;
}