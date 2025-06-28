#include<stdio.h>
 float ctf(float c);

int main(){

    float c;    
    printf("Enter the celsius");
    scanf("%f",&c);
    printf("%f",ctf(c));

return 0;


}
float ctf(float c){
    return c*9/5+32;
}