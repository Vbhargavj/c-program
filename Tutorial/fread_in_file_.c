#include <stdio.h>

int main(){

    FILE *f = fopen("filename.txt", "r");
    char str[10];
    int n;
    float fa;
    fscanf(f, "%s %f %d",str,&fa,&n);
    printf("%d\n",n);
    printf("%f\n",fa);
    printf("%s\n",str);
    return 0;
}