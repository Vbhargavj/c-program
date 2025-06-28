#include <stdio.h>
#include <string.h>
int match(char c)
{
    switch (c)
    {
    case 'I':
        return 1;
        break;
    case 'V':
        return 5;
        break;
    case 'X':
        return 10;
        break;
    case 'L':
        return 50;
        break;
    case 'C':
        return 100;
        break;
    case 'D':
        return 500;
        break;
    case 'M':
        return 1000;
        break;
    default:
        return 0;
        break;
    }
}
int romanToInt(char *s)
{
    int total = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        total = total + match(s[i]);
    }
    printf("%d\n", total);
}

int main()
{
    char s[10];
    scanf("%s", s);
    romanToInt(s);
    return 0;
}