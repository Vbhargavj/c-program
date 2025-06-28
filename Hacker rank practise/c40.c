#include <stdio.h>
int check(int a)
{
    int r, sum = 0;
    while (a)
    {
        r = a % 10;
        if (r == 0 || r == 6 || r == 9)
        {
            sum = sum + 6;
        }
        else if (r == 1)
        {
            sum = sum + 2;
        }
        else if (r == 2 || r == 3 || r == 5)
        {
            sum = sum + 5;
        }
        else if (r == 4)
        {
            sum = sum + 4;
        }
        else if (r == 7)
        {
            sum += 3;
        }
        else if (r == 8)
        {
            sum += 7;
        }

        a = a / 10;
    }
    printf("%d\n", sum);
}

int main(void)
{
    // your code goes here
    int t, a, b;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &a, &b);
        a = a + b;
        check(a);
    }
    return 0;
}
