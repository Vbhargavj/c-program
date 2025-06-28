#include <stdio.h>
void ec(int *a, int *b);

int main()
{
    int bhargav[10];
    printf("Enter the values\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &bhargav[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        ec(&bhargav[i], &bhargav[9 - i]);
    }
    printf("The reverse values are\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", bhargav[i]);
    }
    return 0;
}
void ec(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}