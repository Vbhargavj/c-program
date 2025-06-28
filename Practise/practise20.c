#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a, b;
    printf("Enter the number ");
    scanf("%d", &a);
    printf("Enter the second number ");
    scanf("%d", &b);
    int s = sum(a, b);
    printf("%d\n", s);
    printf("%d",sum);
// different between sum and s
    return 0;
}
int sum(int x, int y)
{
    return x + y;
    }