#include <stdio.h>

int main()
{
    float r, area;
    printf("Enter the radius of circle");
    scanf("%f", &r);
    area = r * r * 3.14;
    printf("The area of circle is %f", area);
    return 0;
}