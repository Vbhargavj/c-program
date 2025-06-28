#include <stdio.h>
#include <time.h>
int N = 10, value=9;
int main()
{
    time_t sec1, sec2;
    int arr[N], a;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = i + 1; j < N; ++j)
        {
            if (arr[i] > arr[j])
            {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    sec1 = time(NULL);
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == value)
        {
            printf("%d", i);
            break;
        }
    }
    sec2 = time(NULL);
    printf("The time to complete the linear search is %d", sec2 - sec1);
    sec1 = time(NULL);
    int mid, low = 0, high = N - 1;
    while (1)
    {
        mid = (low + high) / 2;
        if (arr[mid] == value)
        {
            printf("%d", mid + 1);
            break;
        }
        else if (arr[mid] < value)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    sec2 = time(NULL);
    printf("The time to execute linear search is %d",sec2-sec1);
    return 0;
}