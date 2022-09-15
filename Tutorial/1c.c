#include <stdio.h>

int main(void)
{
    // your code goes here
    int n;
    char c;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &c);
        // fflush(stdin);

        if (c == 'f' || c == 'F')
        {
            printf("Frigate\n");
        }
        else if (c == 'B' || c == 'b')
        {
            printf("BattleShip\n");
        }
        else if (c == 'C' || c == 'c')
        {
            printf("Cruiser\n");
        }
        else if (c == 'D' || c == 'd')
        {
            printf("Destroyer\n");
        }
    }
    return 0;
}
