#include <stdio.h>
#include "bhargav.h"

int main()
{
    int *ptr = int_Memo(2);
    scanIntArray(ptr, 2);
    printf("\n");
    printIntArray(ptr, 2);

    return 0;
}