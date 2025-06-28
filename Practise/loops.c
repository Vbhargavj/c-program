#include<stdio.h>

int main(){

    int x,y;
    printf("enter the value of x");
    scanf("%d",&x);
    printf("enter the value of y");
    scanf("%d",&y);

    if (x>0 && y>0)
    {
        printf("the point (%d,%d) is in first quadrant",x,y);
        /* code */
    }
    else if (x<0  && y>0)
    {

        printf("the point (%d,%d) is in second quadrant",x,y);

    }
    else if (x<0 && y<0)
    {

        printf("the point (%d,%d) is in thir quadrant",x,y);
        /* code */
    }
    else if (x>0 && y<0)
    {

        printf("the point (%d,%d) is in fourth quadrant",x,y);

    }
    else if(x==0 && y==0)

    {
        printf("the point (%d,%d) is origin",x,y);

    }
    else{
        printf("enter valid points");
    }

return 0;

}
