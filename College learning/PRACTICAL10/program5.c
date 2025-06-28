#include <stdio.h>

int main()
{
    char bhargav[100];
    #include <stdio.h>
void swap(int *x, int *y);
int main()
{
    int a, b;
     printf("bhargav vadukar\n");
    printf("enrollment no: 210210116054\n");
    printf("Enter the value of a=");
    scanf("%d", &a);
    printf("Enter the value of b=");
    scanf(" %d", &b);
    printf("After swaping value\n");
    swap(&a, &b);
    printf("Enter the value of a=%d",a);

    printf("Enter the value of b=%d",b);

    return 0; 
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
    printf("Enter the string");
    scanf("%s", bhargav);
    char *ptr;
    ptr = &bhargav[0];
    int i = 0;
    while (*ptr != '\0')
    {
        ptr++;
        i++;
    }
    printf("The length of string is %d", i);

    return 0;
}