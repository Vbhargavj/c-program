// code with harry
#include <stdio.h>

int main()
{

    int marks[] = {96, 56, 67, 53};

    // valus of marks
    printf("%d\n", marks[0]);
    printf("%d\n", marks[1]);
    printf("%d\n", marks[2]);
    printf("%d\n", marks[3]);

    // address of marks
    printf("%u\n", &marks[0]);
    printf("%u\n", &marks[1]);
    printf("%u\n", &marks[2]);
    printf("%u\n", &marks[3]);

    // for loop
    for (int i = 0; i < 4; i++)
    {
        printf("The mark of values is %d\n", marks[i]);
    }

    //  for while
    int i = 0;
    while (i <= 3)
    {
        printf("THE values of marks ARE %d\n", marks[i]);
        i++;
    }
    
    // for do while
    i = 0;
    do
    {
        printf("THE values of marks are  %d\n", marks[i]);
        i++;
    } while (i <= 3);

    return 0;
}