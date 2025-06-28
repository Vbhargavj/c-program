#include<stdio.h>

int main()
{
    int number1,number2;
    printf("enter the number ");
    scanf("%d", &number1);
    printf("enter the number ");
    scanf("%d", &number2);
    for (int i = 0; i < number1; i++)   printf("%d", i);    printf("\n");   printf("\n");
    return 0;
}