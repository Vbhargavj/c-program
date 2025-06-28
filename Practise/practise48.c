#include <stdio.h>

int main()
{

    float x, y;
    printf("Enter the part of x ");
    scanf("%f", &x);
    printf("Enter the part of y ");
    scanf("%f", &y);

    // for first quardant
    if (x > 0 && y > 0)
    {
        printf("(%1.1f,%1.1f)", x, y);
        printf("this is first quardant");
    }
    // for second quardant
    else if (x < 0 && y > 0)
    {
        printf("(%1.1f,%1.1f)", x, y);
        printf("this is second quardant");
    }
    // for third quardant
    else if (y < 0 && x > 0)
    {
        printf("(%1.1f,%1.1f)", x, y);
        printf("this is third quardant");
    }
    // for fourth quardant
    else
    {
        printf("(%1.1f,%1.1f)", x, y);
        printf("this is fourth quardant");
    }

    return 0;
}