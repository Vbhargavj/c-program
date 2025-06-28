#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen ("a.txt", "W");
    if(fptr == NULL){
        printf("Error: Cannot open a file with the specified extensions");
    }
    fprintf(fptr, "%d\n", 1);
    fclose(fptr);

    return 0;
}