#include <stdio.h>

int main()
{ 
    int b=9;
    if (3 + 2 % 5)
        printf("This works");
    if ((b= 10) || (1&&1))
        printf("Even this works");
        printf("%d",b);
  
    return 0;
}