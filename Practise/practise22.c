#include <stdio.h>
#include <math.h>

float squarearea(float s);
float circlearea(float r);
float rectanglearea(float l, float b);
int main()
{

    char ch;
    printf("Enter the chaarcter to count area s for square,c for circle ,r for rectangle ");
    scanf("%c", &ch);
// for square
    float side,l,b;
    float radius;
    if (ch == 's')
    {
        printf("Enter the square edge");
        scanf("%f",&side);
        squarearea(side);
    }

    // for circle
    else if (ch=='c')
    {
       printf("Enter the radius of circle ");
       scanf("%f",&radius);
       circlearea(radius);
    }
    // for rectangle
    else if (ch=='r')
    {
        printf("Enter the sides of the rectangles");
        scanf("%f%f",&l,&b);
        
        rectanglearea(l,b);
    }
    else {
        printf("rtrt");
    }
    

    return 0;
}

float squarearea(float s)
{
    printf("%f",s*s);
}
float circlearea(float r)
{
   printf("%f",3.14*r*r) ;
}
float rectanglearea(float l,float b)
{
    printf("%f", l*b);
}
