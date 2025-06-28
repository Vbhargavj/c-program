#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *b=NULL,a;
    b=&a;
    printf("%d\n",b);
    printf("%d\n",&a);

    return 0;
}