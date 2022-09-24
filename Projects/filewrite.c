#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *f = fopen("view34.txt", "W");
    // char se[] = "STUDENT NAME | ENROLLMENT NUMBER | MOBILE NUMBER | CPI | BRANCH";

    fwrite(&se, sizeof(se), 1, f);

    return 0;
}