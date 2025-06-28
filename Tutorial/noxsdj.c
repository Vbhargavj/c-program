#include<stdio.h>
int anwser(int,char);
int main()
{

    int a=1;
    char c='b';
    a=anwser(a,c);
    printf("%d",a);

    return 0;
}
int anwser(int c,char a)
{
    switch (c)
    {
    case 1:
        if (a == 'b')
            return 1;
        else
            return 0;
        break;
    case 2:
        if (a == 'c')
            return 1;
        else
            return 0;

        break;
    case 3:
        if (a == 'a')
            return 1;
        else
            return 0;
        break;
    case 4:
        if (a == 'a')
            return 1;
        else
            return 0;
        break;
    case 5:
        if (a == 'd')
            return 1;
        else
            return 0;
        break;
    case 6:
        if (a == 'c')
            return 1;
        else
            return 0;
        break;
    case 7:
        if (a == 'b')
            return 1;
        else
            return 0;
        break;
    case 8:
        if (a == 'b')
            return 1;
        else
            return 0;
        break;
    case 9:
        if (a == 'b')
            return 1;
        else
            return 0;
        break;
    case 10:
        if (a == 'b')
            return 1;
        else
            return 0;
        break;
    case 11:
        if (a == 'b')
            return 1;
        else
            return 0;
        break;
    case 12:
        if (a == 'a')
            return 1;
        else
            return 0;
        break;
    case 13:
        if (a == 'c')
            return 1;
        else
            return 0;
        break;

    default:
        printf("Sorry for this is technical problem");
        break;
    }
}