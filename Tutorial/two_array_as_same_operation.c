// this program is related to the codechef program of motivation movies
#include <stdio.h>

int main()
{
    int n = 5, tmp, tmp1, i, j;
    int ary[n], arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        scanf("%d", &ary[i]);
    }

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
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    //     printf("%d\n", ary[i]);
    // }

    return 0;
}
// #include <stdio.h>

// void main()
// {
//     int arr1[100];
//     int n, i, j, tmp;

//        printf("\n\nsort elements of array in ascending order :\n ");
//        printf("----------------------------------------------\n");

//     printf("Input the size of array : ");
//     scanf("%d", &n);

//        printf("Input %d elements in the array :\n",n);
//        for(i=0;i<n;i++)
//             {
// 	      printf("element - %d : ",i);
// 	      scanf("%d",&arr1[i]);
// 	    }

//     for(i=0; i<n; i++)
//     {
//         for(j=i+1; j<n; j++)
//         {
//             if(arr1[j] <arr1[i])
//             {
//                 tmp = arr1[i];
//                 arr1[i] = arr1[j];
//                 arr1[j] = tmp;
//             }
//         }
//     }
//     printf("\nElements of array in sorted ascending order:\n");
//     for(i=0; i<n; i++)
//     {
//         printf("%d  ", arr1[i]);
//     }
// 	        printf("\n\n");
// }