#include <stdio.h>
#include <string.h>
#define MAX 256
void welcome();
void pri();
char as();
int prize();
int user(char);
char answer(int);
void losses();
void prizecounter();
struct userinfo
{
    char username[50];
    char userstate[50];
    int mobile[10];
    int age[10];
    int money[15];
};

int main()
{
    // struct userinfo u1, *str = &u1;
    // printf("Enter you name");
    // scanf("%s", str);
    // str++;
    // printf("Enter your state: ");
    // scanf("%s", str);
    // str++;
    // printf("Enter your mobile number: ");
    // scanf("%s", str);
    // str++; 
    // printf("Enter your age");
    // scanf("%d", str);

    FILE *ptr, *PTR;

    ptr = fopen("questions.txt", "r");
    int ans, count = 0, sum = 0, rupee = 0;
    char c;
    // THIS PORTION IS CUT 1 QUESTON FROM FILE AND PRINT IT
    welcome();
    while (count < 14)
    {
        char *inFileName = "test.txt";
        char *outFileName = "tmp.txt";
        FILE *inFile = fopen(inFileName, "r");
        FILE *outFile = fopen(outFileName, "w+");
        char line[1024]; // maybe you have to user better value here
        int lineCount = 0;
        while (fgets(line, sizeof(line), inFile) != NULL)
        {
            if (lineCount <= 5)
            {
                fprintf(outFile, "%s", line);
            }
            lineCount++;
        }
        fclose(inFile);
        fclose(outFile);
        FILE *que;
        que = fopen("tmp.txt", "r");
        char ch;
        ch = getc(que);
        while (ch != EOF)
        {
            printf("%c", ch);
            ch = getc(que);
        }
        // this loop is print our questions
        // THIS LOOP IS DELETE LINE IN OUR TEXT FILE

        // this is question gerater
        int i = 0;

        // this  is count controll how many time loop execute
        count++;
        printf("\nThe next question prize is %d\n", prize(count));
        // THIS IS PROGRAM TO USE TO PRINT QUESTION ON DISPLAY

    print:
        pri();
        // pri function use to print options

        c = as(c);
        // as function is use to scan value from user

        ans = user(c);
        // user function is use to check user ans is a.b.c or d
        if (ans == 0)
        {
            printf("\nPlease enter the valid option\n");
            // count--;
            goto print;
        }
        // this condition is use to controll counter and loop also

        char u = answer(count);
        // answer function use to check correct answer or not

        if (c != u)
        {
            goto loss;
            break;
        }

        // this condition is use to check function return answer to user answer

        sum = sum + prize(count);
        // this is sum is indicate user current balance

        printf("\nYour answer is %c\n", c);
        // this line says your enter answer
        for (int i = 1; i <= 5; i++)
        {
            int lno, ctr = 0;
            char ch;
            FILE *fptr1, *fptr2;
            char fname[MAX] = "test.txt";
            char str[MAX], temp[] = "temp.txt";
            fptr1 = fopen(fname, "r");
            if (!fptr1)
            {
                printf(" File not found or unable to open the input file!!\n");
                // return 0;
            }
            fptr2 = fopen(temp, "w"); // open the temporary file in write mode
            if (!fptr2)
            {
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
                // return 0;
            }
            // printf(" Input the line you want to remove : ");
            // scanf("%d", &lno);
            lno = 1;
            lno++;
            // copy all contents to the temporary file except the specific line
            while (!feof(fptr1))
            {
                strcpy(str, "\0");
                fgets(str, MAX, fptr1);
                if (!feof(fptr1))
                {
                    ctr++;
                    /* skip the line at given line number */
                    if (ctr != lno)
                    {
                        fprintf(fptr2, "%s", str);
                    }
                }
            }
            fclose(fptr1);
            fclose(fptr2);
            remove(fname);
            rename(temp, fname);

            fclose(fptr1);
            /*------- End of reading ---------------*/
        }
    }
    goto win;
// this goto statment use to jump direct on win portion
loss:
    losses();
    goto end;
win:
    printf("You have successfully win ");
    printf("%d", sum);
    // this is says you win how many money
    goto end;
    // this is end to terminate our progran

end:
    return 0;
}
void welcome()
{
    // WELCOME IS APPEAR ON TOP TO WELCOME USER
    printf("\x1B[31m");
    printf("Hello Dear,Welcome to the \n");
    printf("\x1B[34m");
    printf("Kon Banega Crorepati\n");
    printf("\n");
    printf("\x1B[33m");
    printf("You have to chance to win lot of money \n");
    printf("\x1B[36m");
    printf("\n");
    printf("please select right answer to win\n ");
    printf("Let's get started..........\n");
    printf("\x1B[0m");
    printf("\n");
    printf("\n");
}
void pri()
{
    // THIS IS FUNCTION IS USE TO PRINT INSTRUCTION
    printf("\nEnter the answer of option a,b,c,d\n");
}
char as(int a)
{
    // THIS IS FUNCTION USE TO ANSWER FROM USER
    scanf(" %c", &a);
    return a;
}
int prize(int p)
{
    // THIS FUNCTION IS USE TO INDICATE PRIZE

    switch (p)
    {
    case 0:
        return 0;
        break;
    case 1:
        return 1000;
        break;
    case 2:
        return 3000;
        break;
    case 3:
        return 5500;
        break;
    case 4:
        return 10000;
        break;
    case 5:
        return 25000;
        break;
    case 6:
        return 50000;
        break;

    case 7:
        return 75000;
        break;
    case 8:
        return 100000;
        break;
    case 9:
        return 250000;
        break;

    case 10:
        return 500000;
        break;
    case 11:
        return 7500000;
        break;
    case 12:
        return 10000000;
        break;

    case 13:
        return 70000000;
        break;

    default:
        printf("\nSorry_._.... this is technical problem\n");
        break;
    }
}
int user(char a)
{
    // CONFIRM USER INPUT OPTION A,B,C,D;
    if (a == 'a' || a == 'b' || a == 'c' || a == 'd')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char answer(int a)
{
    // THIS IS OUR ANSWER KEY
    switch (a)
    {
    case 1:
        return 'b';
        break;
    case 2:
        return 'c';
        break;
    case 3:
        return 'a';
        break;
    case 4:
        return 'a';
        break;
    case 5:
        return 'd';
        break;
    case 6:
        return 'c';
        break;
    case 7:
        return 'b';
        break;
    case 8:
        return 'b';
        break;
    case 9:
        return 'b';
        break;
    case 10:
        return 'b';
        break;
    case 11:
        return 'b';
        break;
    case 12:
        return 'a';
        break;
    case 13:
        return 'c';
        break;
    default:
        printf("Sorry for this is technical problem");
        break;
    }
}
void losses()
{
    // THIS MASSAGE USE, WHEN USER LOSS
    printf("\nOh____...........\n");
    printf("\nYou loss your money \n");
    printf("\n Better luck Next time\n");
}