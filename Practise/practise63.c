#include <stdio.h>
#include <math.h>

int main()
{

    float x;
    printf("Ener value for know sin's value");
    scanf("%f", &x);
    if (x !=0)
    {
    float sinx = sin(1/x);
    printf("%.4f", sinx);
        /* code */
    }
    else{
        printf(" PLZ don't Enter o ");
    }
    

    return 0;
}