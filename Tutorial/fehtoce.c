#include<stdio.h>
float feh(float feh);

int main()
{
    float cel=5;

    printf("%f\n",feh(cel));
    // printf("%f",9/5.);
    // printf("%f\n",5.0/9.0);


    return 0;
}
float feh(float cel){
    float fer=cel*9/5+32;
    return fer;
}
