#include <stdio.h>

int main()
{
    int n, a, i, j, tmp, count1 = 0, count = 0;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &a);
        int array[a];
        for (i = 0; i < a; i++)
        {
            fflush(stdin);
            scanf("%d", &array[i]);
        }
        for (i = 0; i < a; i++)
        {
            for (j = i + 1; j < a; j++)
            {
                if (array[i] > array[j])
                {
                    tmp = array[i];
                    array[i] = array[j];
                    array[j] = tmp;
                }
            }
        }
        count = 0;
        for (i = 0; i < a; i++)
        {
            count1 = 0;
            tmp = 1;
            for (j = i; j < a; j++)
            {
                if (array[i] == array[j])
                {
                    count1++;
                    // count=count1;
                }
                else
                {
                    tmp++;
                }
            }
            i = j - tmp;

            if (count < count1)
            {
                count = count1;
            }
        }
        // printf("Count : %d\n", count);
        printf("%d\n", a - count);
    }

    return 0;
}