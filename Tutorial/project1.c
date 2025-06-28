#include <stdio.h>
// fill function to input from user
void fill(int);

int main()
{

    char game[3][3];
    int n, count = 0;

    // fill game with character
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            count++;
            game[i][j] = count + '0';
        }
    }
    // get output with game
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c\t", game[i][j]);
        }
        printf("\n");
    }
    for (int k = 1; k < 10; k++)
    {
        // HERE PROGRAM'S BEGINING

        printf("Enter the number to createx on\n");
        scanf("%d", &n);
        
        switch (n)
        {
        case 1:
            game[0][0] = 'X';
            break;
        case 2:
            game[0][1] = 'X';
            break;
        case 3:
            game[0][2] = 'X';
            break;
        case 4:
            game[1][0] = 'X';
            break;
        case 5:
            game[1][1] = 'X';
            break;
        case 6:
            game[1][2] = 'X';
            break;
        case 7:
            game[2][0] = 'X';
            break;
        case 8:
            game[2][1] = 'X';
            break;
        case 9:
            game[2][2] = 'X';
            break;

        default:
            printf("Enter the valid information\n");
            break;
        }
    // for display user responce

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%c\t", game[i][j]);
            }
            printf("\n");
        }
        // input from user
        printf("Enter the number to createx on\n");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            game[0][0] = 'O';
            break;
        case 2:
            game[0][1] = 'O';
            break;
        case 3:
            game[0][2] = 'O';
            break;
        case 4:
            game[1][0] = 'O';
            break;
        case 5:
            game[1][1] = 'O';
            break;
        case 6:
            game[1][2] = 'O';
            break;
        case 7:
            game[2][0] = 'O';
            break;
        case 8:
            game[2][1] = 'O';
            break;
        case 9:
            game[2][2] = 'O';
            break;

        default:
            printf("Enter the valid information\n");
            break;
        }
    // for display user responce
          for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%c\t", game[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

// condition for x
int conx(int f)
{
    if (f!='X' ||f!='O')
    {
        return 0;
    }
    
}