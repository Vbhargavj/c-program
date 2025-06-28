#include <stdio.h>

int main()
{
    float pow1, pow2;
    printf("Enter the value ");
    scanf("%f", &pow1);
    printf("Enter the power you want");
    scanf("%f", &pow2);
    for (int i = 1; i < pow2; i++)
    {
        pow1 = pow1 * pow1;
    }
    printf("%f", pow1);

    return 0;
}