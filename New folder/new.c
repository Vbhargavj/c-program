#include <stdio.h>

int main()
{

    remove("filesave.txt");
     int re = rename("temp.txt", "filesave.txt");
    if (re == 0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}