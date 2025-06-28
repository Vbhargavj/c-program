#include<stdio.h>

int main()
{

    char buf[24];
    scanf("%[^\n]",buf);ṇ
    for (int  i = 0; i < 24; i++)
    {
        if (buf[i]==' ')
        {
            printf("\n");
        }
        else{
            printf("%c",buf[i]);
        }
        
    }
    

    return 0;
}