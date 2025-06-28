#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("pr02.txt", "w");
    int m[100];
    printf("\033[0;32m");
    // for Green colour
    printf("**ENTER THE MERIT MARKS\n\n");
    for (int i = 0; i < 100; i++)
    {
        printf("Enter the merit marks of student %d : ", i + 1);
        scanf("%d", &m[i]);
    }
    fwrite(m, sizeof(int), 100, ptr);
    printf("\033[0;34m");
    // for Blue colour
    printf("\n\nTHE MERIT MARKS OF THE STUDENTS DISPLAY BELOW**\n\n");
    ptr = fopen("file of pr02.txt", "r");
    fread(m, sizeof(int), 100, ptr);
    for (int i = 0; i < 100; i++)
    {
        printf("merit marks of student %d is : %d\n", i + 1, m[i]);
    }
    fclose(ptr);
    return 0;
}