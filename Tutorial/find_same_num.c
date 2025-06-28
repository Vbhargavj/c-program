#include <stdio.h>

int main()
{
    int a, b;
    // taking input from user
    scanf("%d%d", &a, &b);

    for (int i = 1; i < 100; i++)
    {
        // this k is temp veriable store i
        // r is remainder
        int k = i, r;
        int f = 0, j;
        // f is our counter for use remainder is same as our a and b
        // j is counter for how many digit in number 12-->2,3-->1
        // this for loop is count digit
        for (j = 0; k != 0; j++)
        {
            r = k % 10;
            k = k / 10;
            // this condition is use to check remainder is same as user input(a,b)
            if (r == a || r == b)
            {
                f++;
                // printf("r%d\n",r);
            }
        }
        // printf("%d,%d\n",f,j);
        // this condition is use to check digit(j) and our f
        if (f == j)
        {
            // when f=j print i value
            printf("%d\n", i);
        }
    }
    return 0;
}