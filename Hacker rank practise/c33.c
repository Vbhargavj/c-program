#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, a, b;
    // this is store test cases
    scanf("%d", &n);

    while (n--)
    {
        // this is use to take VALUE FROM USER
        scanf("%d%d", &a, &b);
        // THIS IS USE TO CREATE ARRAY SIZE OF A
        int ary[a], arr[a];
        // ARY IS STORE SIZE OF MOVIES
        // ARR IS STORE rating of movies
        // THIS IS USE TO STORE SIZE OF MOVIES AND RATINGS
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &ary[i]);
            scanf("%d", &arr[i]);
        }
        // this is short an array by ratings
        // automatically short with respect to movies size
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[i])
                {
                    tmp = arr[i];
                    tmp1 = ary[i];
                    arr[i] = arr[j];
                    ary[i] = ary[j];
                    arr[j] = tmp;
                    ary[j] = tmp1;
                }
            }
        }
    }
    return 0;
}