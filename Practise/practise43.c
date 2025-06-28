#include <stdio.h>

float tp(float a, float b, float c)
{
    return a + b + c;
}

int main()
{

    float s1, s2, s3;
    printf("Enter the first side of triangle");
    scanf("%f", &s1);
    printf("Enter the first side of triangle");
    scanf("%f", &s2);
    printf("Enter the first side of triangle");
    scanf("%f", &s3);

    if ((s1 < s2 + s3)&&(s2<s1+s3)&&(s3<s1+s2))
    {
        printf("%f", tp(s1, s2, s3));
    }
    else{
        printf("go and complete your primary study");
    }
    
    return 0;
}