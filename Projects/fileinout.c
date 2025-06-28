#include <stdio.h>

int main()
{

    FILE *vbj;
    vbj = fopen("bhargav.txt", "r");
    char c;
    c = fgetc(vbj);
    printf("%c", c);
    while (c != EOF)
    {
        c = fgetc(vbj);
        printf("%c", c);
    }
    return 0;
}