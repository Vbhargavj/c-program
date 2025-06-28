#include <stdio.h>

int main(void)
{
    // your code goes here
    int t, s, count = 0;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &s);
        count = 0;
        for (int i = 0; i < s; i++)
        {
            s--;
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
