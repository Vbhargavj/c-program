#include <stdio.h>

int display()
{
    int c;
    printf("Choose option to perform operation\n\n");
    printf("\t1:Insert\n");
    printf("\t2:Delete\n");
    printf("\t3:Search\n\n\t");
    scanf("%d", &c);
    return c;
}
void fun(int value){
    
}
void insert(){
    
}
int main()
{
    display();
    int hash[10];
    for (int i = 0; i < 10; i++)
    {
        hash[i] = -1;
    }
    

    return 0;
}