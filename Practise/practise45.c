#include <stdio.h>

float sq(float a, float b)
{
    int i, s = 1;

    for (i = 1; i <= b; i++)
    {
        s = s * a;
    }

    return s;
}

int main()
{
    float n, m;
    printf("Enter the number you want to calculate power");
    scanf("%f", &n);
    printf("Enter the power ");
    scanf("%f", &m);
    printf("%f", sq(n, m));

    return 0;
}