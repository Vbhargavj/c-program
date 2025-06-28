#include <stdio.h>
#include <math.h>
// int b = 0;
// int check(int desi)
// {
//     b = 0;
//     int ary[] = {1, 2, 4, 8, 16, 32, 64, 128};
//     for (int i = 0; i < 8; i++)
//     {
//         if (ary[i] <= desi)
//         {
//             b++;
//         }
//     }
//     return --b;
// }
// // int count = 0;
// int returnelement(int desi)
// {
//     int ary[] = {1, 2, 4, 8, 16, 32, 64, 128};
//     check(desi);
//     return ary[b];
// }

// int desi_to_bin(int desi)
// {
//     int bina = 0, r = 0;
//     while (desi > 0)
//     {
//         r = returnelement(desi);

//         bina += desi / r;
//         desi = desi % r;
//         bina = bina * 10;
//     }
//     if (b != 0)
//     {
//         // printf("%d\n");
//         // bina += po w(10,b);
//     }

//     return bina;
// }

int binaa(int desi)
{

    int w = 0;
    int count = 0, bina = 0, ary[] = {1, 2, 4, 8, 16, 32, 64, 128};
    for (int i = 0; i < 8; i++)
    {
        if (ary[i] <= desi)
        {
            count++;
        }
    }
   
    int k;
    while (desi > 0)
    {
        bina *= 10;
        k = ary[--count];
        bina = bina + (desi / ary[count]);
        desi = desi % ary[count];
    }
    bina = bina * (float)pow(10, count);

    return bina;
}

int main()
{
    int desi;
    printf("Enter the desimal number\n");
    scanf("%d", &desi);
    printf("%d", binaa(desi));
    return 0;
}