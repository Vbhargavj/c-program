#include <stdio.h>
int matche(int r)
{
    switch (r)
    {
    case 0:
        return 6;
    case 1:
        return 2;
    case 2:
        return 5;
    case 3:
        return 5;
    case 4:
        return 4;
    case 5:
        return 5;
    case 6:
        return 6;

    case 7:
        return 3;
    case 8:
        return 7;
    case 9:
        return 6;
    }
}
int main(void)
{
    // your code goes here
    int t, a, b, s;
    scanf("%d", &t);
    while (t--)
    {
        s = 0;
        scanf("%d%d", &a, &b);
        a = a + b;
        while (a != 0)
        {

            b = a % 10;
            s = s + matche(b);
            a = a / 10;
        }
        printf("%d\n", s);
    }
    return 0;
}
