#include <stdio.h>
int check(char i, char j, char k, char l)
{
    int flag = 0;
    char c[4];
    c[0] = i;
    c[1] = j;
    c[2] = k;
    c[3] = l;
    for (int n = 0; n < 4; n++)
    {
        if (c[n] != 'a' && c[n] != 'e' && c[n] != 'i' && c[n] != 'o' && c[n] != 'u')
        {
            flag = 1;
        }
        printf("Yes");
    }
    return flag;
}
int main()
{
    char c[8];
    int flag = 0;
    scanf("%s",c);
    for (int i = 0; i < 8; i = +4)
    {
        flag = check(c[i], c[i + 1], c[i + 2], c[i + 3]);
    }

    return 0;
}