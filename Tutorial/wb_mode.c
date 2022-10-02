#include <stdio.h>

int main()
{

    FILE *file = fopen("w.bin", "wb");
    fprintf(file, "%s\n", "thsi sisi");
    return 0;
}