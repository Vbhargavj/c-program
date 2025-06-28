#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char fub[10], buf[10];

    scanf("%s%s", fub, buf);
    if (strcmp(buf, fub) < 0)
    {
        printf("%s\n", buf);
        printf("%s\n", fub);
    }
    else{
        printf("%s\n", fub);
        printf("%s\n", buf);
    }
    return 0;
}