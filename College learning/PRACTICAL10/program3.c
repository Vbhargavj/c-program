#include <stdio.h>
void swap(int *, int *);
int main()
{

    int a, b;
    printf("Enter the values of a and b");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("The values of a is %d and b is %d", a, b);

    return 0;
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}