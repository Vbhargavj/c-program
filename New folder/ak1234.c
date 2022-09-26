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
void exitp();
void user();
void search();

int i = 0;
struct student
{
    char name[25];
    char branch[20];
    long long int en_no;
    long long int m_no;
    float cpi;
};

struct student std[5];

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
        printf("\n");
        view();
        break;
    case 2:
        printf("\n");
        add();
        break;
    case 3:
        printf("\n");
        update();
        break;
    case 4:
        printf("\n");
        delet();
        break;
    case 5:
        printf("\n");
        search();
        break;
    case 6:
        printf("\n");
        exitp();
        break;
    default:
        printf("\n");
        printf("Invaid Input\n");
        display();
        break;
    }
}
// this function is use to take values from the user
void add()
{
    set();
    FILE *f = fopen("view.txt", "a");
    printf("\nEnter student name : ");
    fflush(stdin);
    scanf("%[^\n]", std[i].name);
    fprintf(f, "%s  ", std[i].name);
    printf("\nEnter student enrollment number : ");
    scanf("%lld", &std[i].en_no);
    // (f, "%d  ", &std[i].eno);
    fprintf(f, "%lld", std[i].en_no);

    printf("\nEnter student mobile number : ");
    scanf("%lld", &std[i].m_no);
    fprintf(f, " %lld  ", std[i].m_no);
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
            printf("Student Enrollment Number: %lld\n", std[l].en_no);
            printf("Student Name : %s\n", std[l].name);
            printf("Student CPI : %f\n", std[l].cpi);
            printf("Student Mobile Number : %lld\n", std[l].m_no);
            printf("Student Branch : %s\n", std[l].branch);
            printf("\n\n");
        }
        display();
    }
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
        if (start == std[j].en_no)
        {
            flag = 1;
            printf("Student Name : %s\n", std[j].name);
            printf("Student Branch : %s\n", std[j].branch);
            printf("Student Enrollment : %lld\n", std[j].en_no);
            printf("Student Mobile number : %lld\n", std[j].m_no);
            printf("Student CPI : %f\n", std[j].cpi);
        }
    }
    // if student was not found then print not found
    if (flag == 0)
    {
        {
            printf("\nStudent Not Found..\n");
        }
    }
    display();
}

// this function is use to delete all records in the file
// this function required to set the function
void clear()
{
    FILE *f = fopen("view.txt", "w");
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
    char name[30];
    printf("Enter the name of the student to update\n");
    scanf("%s", name);
    int flag = 0;
    for (int j = 0; j < 5; j++)
    {
        if (strcmp(name, std[j].name) == 0)
        {
            flag = 1;
            fflush(stdin);
            printf("\nEnter student's name : ");
            scanf(" %[^\n]", std[j].name);
            fflush(stdin);

            printf("\nEnter student's enrollment number : ");
            scanf("%lld", &std[j].en_no);

            printf("\nEnter student's mobile number : ");
            scanf("%lld", &std[j].m_no);

            printf("Enter student's cpi : ");
            scanf("%f", &std[j].cpi);

            printf("Enter student's branch : ");
            scanf("%s", std[j].branch);
        }
    }
    if (flag == 0)
    {
        printf(" Details Not Nound  ");
    }
    else
    {
        printf("Data Update Successful\n");
    }

    display();
}

void delet()
{
    long long int k;
    printf("Enter the enrollment number to delete the student data : ");
    scanf("%lld", &k);
    int flag = 0;
    for (int l = 0; l < 5; l++)
    {
        if (k == std[l].en_no)
        {
            for (int m = 0; m < 4; m++)
            {
                std[m] = std[m + 1];
            }
        }
        i--;
    }

    if (flag == 1)
    {
        printf("\nStudent Delete Successfully\n");
    }
    else
    {
        printf("\t\nStudent Not Nound\n");
    }

    display();
}

// complete //this is use to terminate the program
void exitp()
{
    exit(0);
}