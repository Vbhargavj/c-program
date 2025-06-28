#include <stdio.h>
// #define n 6
int max(int *a, int *b)
{
    int ma;
    if (*a < *b)
    {
        ma = *a;
        *a = *b;
        *b = ma;
    }
}
int main()
{
    int n;
    printf("Enter the array of lenth");
    scanf("%d", &n);

    int bhargav[n];
    printf("Enter the values");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &bhargav[i]);
    }
    for (int i = 0; i < n; i++)
    {
        max(&bhargav[i], &bhargav[i + 1]);
        i++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", bhargav[i]);
    }
    return 0;
}