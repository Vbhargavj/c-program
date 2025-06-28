#include <stdio.h>
#include <string.h>

int sl(char *a);
int main()
{
    char c[30];
     printf("bhargav vadukar\n");
    printf("enrollment no: 210210116054\n");
    printf("Enter the string ");
    scanf("%s", c);
    int b = sl(c);
    printf("The length of string is %d", b);
    return 0;
}
int sl(char a[])
{
    int b = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        b++;
    }
    return b;
}