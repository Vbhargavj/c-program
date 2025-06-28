#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void add();
void view();
void display();
void clear();
void set();
void delet();
void update();
void exi();
void user();
void search();
void shor();

int i = 0;
struct student
{
    char name[25];
    char branch[20];
    long long int eno;
    long long int mno;
    float cpi;
};

struct student std[5],tmp;

int main()
{
    display();

    return 0;
}
void display()
{
    printf("\n\t-.-.-.Select option to perform an operation.-.-.-.-\n");
    printf("\t\t\t1 : VIEW \n");
    printf("\t\t\t2 : ADD \n");
    printf("\t\t\t3 : UPDATE \n");
    printf("\t\t\t4 : DELETE \n");
    printf("\t\t\t5 : SEARCH \n");
    printf("\t\t\t6 : EXIT \n");
    user();
}

void user()
{
    int a;
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        view();
        break;
    case 2:
        add();
        break;
    case 3:
        update();
        break;
    case 4:
        delet();
        break;
    case 5:
        search();
        break;
    case 6:
        exi();
        break;
    default:
        printf("Unknown command\n");
        display();
        break;
    }
}
// this function is use to take values from the user
void add()
{
    set();
    FILE *f = fopen("view.bin", "wb");
    printf("\nEnter student name : ");
    fflush(stdin);
    scanf("%[^\n]", std[i].name);
    fprintf(f, "%s  ", std[i].name);
    printf("\nEnter student enrollment number : ");
    scanf("%lld", &std[i].eno);
    // (f, "%d  ", &std[i].eno);
    fprintf(f, "%lld", std[i].eno);

    printf("\nEnter student mobile number : ");
    scanf("%lld", &std[i].mno);
    fprintf(f, " %lld  ", std[i].mno);
    printf("Enter student cpi : ");
    scanf("%f", &std[i].cpi);
    fprintf(f, "%0.2f ", std[i].cpi);
    printf("Enter student branch : ");
    scanf("%s", std[i].branch);
    fprintf(f, "%s ", std[i].branch);
    i++;
    display();
}
void view()
{
    if (i == 0)
    {
        printf("\t\t\nFile is empty\n");
    }
    else
    {

        for (int l = 0; l < i; l++)
        {
            printf("Student ENROLLMENT number: %lld\n", std[l].eno);
            printf("Student name : %s\n", std[l].name);
            printf("Student CPI : %f\n", std[l].cpi);
            printf("Student mobile number : %lld\n", std[l].mno);
            printf("Student BRANCH : %s\n", std[l].branch);
        }
    }
    display();
}
// this function is use to search student with name
void search()
{
    long long int start;
    printf("\nEnter the enrollment number to search the student :\n");
    scanf("%lld", &start);
    // this flag veriable is use to flag student found or not found
    int flag = 0;
    for (int j = 0; j < 5; j++)
    {
        if (start == std[j].eno)
        {
            flag = 1;
            printf("Student name : %s\n", std[j].name);
            printf("Student BRANCH : %s\n", std[j].branch);
            printf("Student enrollment : %lld\n", std[j].eno);
            printf("Student MOBILE number : %lld\n", std[j].mno);
            printf("Student cpi : %f\n", std[j].cpi);
        }
    }
    // if student was not found then print not found
    if (flag == 0)
    {
        {
            printf("\n oops,,,... Student not found..\n");
        }
    }
    display();
}

// this function is use to delete all records in the file
// this function required to set the function
void clear()
{
    // FILE *f = fopen("view.txt", "w");
}

// this function is use to set our panel
// this function is required for add function
void set()
{
    clear();
    char se[] = "  STUDENT NAME    |  ENROLLMENT NUMBER  | MOBILE NUMBER | CPI | BRANCH";
    FILE *f = fopen("view.txt", "a");
    fprintf(f, "%s\n", se);
}

void update()
{
    char name[25];
    printf("Enter the name of the student to update\n");
    scanf("%s", name);
    int flag = 0;
    for (int j = 0; j < 5; j++)
    {
        if (strcmp(name, std[j].name) == 0)
        {
            flag = 1;
            fflush(stdin);
            printf("\nEnter student name : ");
            scanf(" %[^\n]", std[j].name);
            fflush(stdin);

            printf("\nEnter student enrollment number : ");
            scanf("%lld", &std[j].eno);

            printf("\nEnter student mobile number : ");
            scanf("%lld", &std[j].mno);

            printf("Enter student cpi : ");
            scanf("%f", &std[j].cpi);

            printf("Enter student branch : ");
            scanf("%s", std[j].branch);
        }
    }
    if (flag == 0)
    {
        printf("not found  ");
    }
    else
    {
        printf("Data update successful\n");
    }

    display();
}

void delet()
{
    long long int e;
    printf("Enter the enrollment number to delete\n");
    scanf("%lld", &e);
    int flag = 0;
    for (int l = 0; l < 5; l++)
    {
        if (e == std[l].eno)
        {
            for (int q = 0; q < 4; q++)
            {
                std[q] = std[q + 1];
            }
        }
        i--;
    }

    if (flag == 1)
    {
        printf("\nStudent delete Successfully\n");
    }
    else
    {
        printf("\t\n oops..Student not found\n");
    }

    display();
}

// complete //this is use to terminate the program
void exi()
{
    // goto exit;
    exit(0);
}
// void shor(){
//     for (int t = 0; t <5; t++)
//     {
//         for (int l = 0; l < 5; l++)
//         {
            
//         }
        
//     }
    
// }