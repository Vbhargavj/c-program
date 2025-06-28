#include <stdio.h>

int rem(int a)
{
    switch (a)
    {
    case 0:
        return 6;
        break;
    case 1:
        return 2;
        break;
    case 2:
        return 5;
        break;
    case 3:
        return 5;
        break;
    case 4:
        return 4;
        break;
    case 5:
        return 5;
        break;
    case 6:
        return 6;
        break;
    case 7:
        return 3;
        break;
    case 8:
        return 7;
        break;
    case 9:
        return 6;
        break;

    default:
        break;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int ARY ;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d", &a);
        scanf("%d", &b);

        a = a + b;
        int r, sum = 0, m;

        for (int i = 0; a != 0; a = a / 10)
        {
            r = a % 10;
            m = rem(r);
            sum = sum + m;
        }
        printf("%d\n", sum);
    }

    return 0;
}