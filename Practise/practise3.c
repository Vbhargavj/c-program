#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the values of a");
    scanf("%d", &a);
    printf("Enter the values of b");
    scanf("%d", &b);
    printf("Enter the values of c");
    scanf("%d", &c);
    int sum = a + b + c;
    int avg = sum / 3;
    printf("The average of %d", avg);
    return 0;
}