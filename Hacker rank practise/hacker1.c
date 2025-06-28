#include <stdio.h>

int main()
{
int n;
    scanf("%d", &n);
    int bhargav[n],  count = 0;


    for (int i = 0; i < n; i++)
    {
        scanf("%d",&bhargav[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (bhargav[i]==1)
        {
            break;
    
        }
        else{
            count++;
        }
        
    }
        printf("%d",count);
    
    

    return 0;
}