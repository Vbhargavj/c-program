#include <stdio.h>

int main()
{

    int pri, i = 1, count;
    while (i < 200)
    {
        count = 0;
        pri=2;
        
        while (pri <= i/2)
        {
            if (i % pri == 0)
            {
                
                count++;
            break;
            }
            pri++;
        }

        if (count == 0)
        {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}