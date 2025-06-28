#include <stdio.h>

int main()
{
    float feh, cent;
    printf("Enter fehrenhit temperature");
    scanf("%f", &feh);
    cent = (feh - 32) * 5 / 9;
    printf("In centrigrade temperature is= %.2f", cent);
    return 0;
}