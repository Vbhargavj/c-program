#include <stdio.h>
#include <stdlib.h>

void renam1();
void user();
void add();
void exi();
void display();
void filesave();
void view();
void delet();
void update();
void sort();
void search();

struct student
{
    long long int eno, mo;
    char name[25], branch[15];
    float cpi;
} std[5], temp;

int i = 0;

int main()
{
    printf("\nVADUKAR BHARGAV JENTIBHAI\n");
    printf("ENROLLMENT NUMBER: 210210116054\n");
    display();

    return 0;
}

void display()
{
    fflush(stdin);
    fflush(stdout);
    
    printf("\n\t-.-.-.Select option to perform an operation.-.-.-.-\n");
    printf("\t\t\t1 : VIEW \n");
    printf("\t\t\t2 : ADD \n");
    printf("\t\t\t3 : UPDATE \n");
    printf("\t\t\t4 : DELETE \n");
    printf("\t\t\t5 : SEARCH \n");
    printf("\t\t\t6 : EXIT \n");
    printf("\t\t\t7 : SHORT THE STUDENT BY CPI\n");
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

    case 7:
        sort();
        break;
   
    default:
        printf("Unknown command\n");
        display();
        break;
    }
}

void add()
{
    fflush(stdin);

    printf("\nEnter student name : ");
    scanf("%[^\n]", std[i].name);

    printf("\nEnter student enrollment number : ");
    scanf("%lld", &std[i].eno);

    printf("\nEnter student mobile number : ");
    scanf("%lld", &std[i].mo);

    printf("Enter student cpi : ");
    scanf("%f", &std[i].cpi);

    printf("Enter student branch : ");
    scanf("%s", std[i].branch);

    FILE *f = fopen("filesave.txt", "a");
    fprintf(f, "%s %lld %lld %s %0.2f\n", std[i].name, std[i].eno, std[i].mo, std[i].branch, std[i].cpi);
    printf("DATA SUCESSFULLY STORE IN FILE \n");
    fclose(f);
    display();
}

void filesave()
{
    FILE *f = fopen("filesave.txt", "a");
    fprintf(f, "%s %lld %lld %s %0.2f\n", std[i].name, std[i].eno, std[i].mo, std[i].branch, std[i].cpi);
    printf("DATA SUCESSFULLY STORE IN FILE \n");
    fclose(f);
}

void exi()
{
    exit(0);
}
int flag = 0, sflag = 0;

void view()
{
    FILE *fp = fopen("filesave.txt", "r");

    while (fscanf(fp, "%s %lld %lld %s %f\n", temp.name, &temp.eno, &temp.mo, temp.branch, &temp.cpi) != EOF)
    {
        flag = 1;
        // fscanf(fp, "%s %lld %lld %s %f\n", temp.name, &temp.eno, &temp.mo, temp.branch, &temp.cpi);
        printf("%s %lld %lld %s %0.2f\n", temp.name, temp.eno, temp.mo, temp.branch, temp.cpi);
    }

    fclose(fp);
    fflush(stdin);
    display();
}

long long int buf;

// this function is use to search student in file and current structure
void search()
{
    FILE *fp = fopen("filesave.txt", "r");
    printf("Enter the enrollment number to search");
    scanf("%lld", &buf);
    printf("searching...\n");
    sleep(1);
    system("cls");
    // this loop is use to search student in file
    while (fscanf(fp, "%s %lld %lld %s %f\n", temp.name, &temp.eno, &temp.mo, temp.branch, &temp.cpi) != EOF)
    {
        if (buf == temp.eno)
        {
            sflag = 1;
            printf("You are searching this student\n");
            printf("%s %lld %lld %s %0.2f\n", temp.name, temp.eno, temp.mo, temp.branch, temp.cpi);
            break;
        }
    }
    // when data not found in file and structure below code execute
    if (sflag == 0)
    {
        printf("Data was not found in the record\n");
    }
    fclose(fp);
    display();
}

void delet()
{
    fflush(stdout);
    printf("Enter the enrollment number of student to delete\n");
    scanf("%lld", &buf);
    FILE *fp = fopen("filesave.txt", "r");
    FILE *f = fopen("temp.txt", "w");
    printf("searching...\n");
    // sleep(1);
    // system("cls");
    // this loop is use to search studet in file

    while (fscanf(fp, "%s %lld %lld %s %f\n", temp.name, &temp.eno, &temp.mo, temp.branch, &temp.cpi) != EOF)
    {

        if (buf == temp.eno)
        {
            printf("\nDeleting\n");
        }
        else
        {

            sflag = 1;
            // printf("You are searching this student\n");
            printf("%s %lld %lld %s %0.2f\n", temp.name, temp.eno, temp.mo, temp.branch, temp.cpi);
            fprintf(f, "%s %lld %lld %s %f\n", temp.name, temp.eno, temp.mo, temp.branch, temp.cpi);
        }
    }

    // when data not found in file and structure below code execute
    fclose(fp);
    fclose(f);
    renam1();
    if (sflag == 0)
    {
        printf("Data was not found in the record\n");
        display();
    }
    else
    {
        display();
    }
}

void renam1()
{
    remove("filesave.txt");
    printf("\nYes i am calling now\n");
    rename("temp.txt", "filesave.txt");
}

void update()
{
    fflush(stdout);
    printf("Enter the enrollment number of student to delete\n");
    scanf("%lld", &buf);
    FILE *fp = fopen("filesave.txt", "r");
    FILE *f = fopen("temp.txt", "w");
    printf("searching...\n");
    sleep(1);
    system("cls");

    // this loop is use to search studet in file
    while (fscanf(fp, "%s %lld %lld %s %f\n", temp.name, &temp.eno, &temp.mo, temp.branch, &temp.cpi) != EOF)
    {
        if (buf == temp.eno)
        {
            int c;
            while (1)
            {
                printf("%s %lld %lld %s %0.2f\n", temp.name, temp.eno, temp.mo, temp.branch, temp.cpi);

                printf("\n\nChoose the field that update for student \n");
                printf("1:Name\n");
                printf("2:Enrollment number\n");
                printf("3:Student mobile number\n");
                printf("4:Student branch\n");
                printf("5:Student cpi\n");
                printf("6:Exit\n");
                scanf("%d", &c);

                if (c == 6)
                {
                    break;
                }

                switch (c)
                {
                case 1:
                    printf("Enter the student's name\n");
                    scanf("%s", temp.name);
                    break;
                case 2:
                    printf("Enter the student's Enrollment number\n");
                    scanf("%lld", &temp.eno);
                    break;
                case 3:
                    printf("Enter the student's mobile number\n");
                    scanf("%lld", &temp.mo);
                    break;
                case 4:
                    printf("Enter the student's branch\n");
                    scanf("%s", temp.branch);
                    break;
                case 5:
                    printf("Enter the student's cpi\n");
                    scanf("%f", &temp.cpi);
                    break;
                default:
                    printf("Choose aproprite option\n");
                    break;
                }
            }
            fprintf(f, "%s %lld %lld %s %f\n", temp.name, temp.eno, temp.mo, temp.branch, temp.cpi);
        }
        else
        {

            sflag = 1;
            fprintf(f, "%s %lld %lld %s %f\n", temp.name, temp.eno, temp.mo, temp.branch, temp.cpi);
        }
    }

    // when data not found in file and structure below code execute
    fclose(fp);
    fclose(f);
    renam1();
    if (sflag == 0)
    {
        printf("Data was not found in the record\n");
        // renam();
        display();
    }
    else
    {
        // renam();s
        display();
    }
}

void sort()
{
    int count = 0;
    FILE *fp = fopen("filesave.txt", "r");
    printf("Sorting\n");
    while (fscanf(fp, "%s %lld %lld %s %f\n", temp.name, &temp.eno, &temp.mo, temp.branch, &temp.cpi) != EOF)
    {
        count++;
        sflag = 1;
    }
    rewind(fp);
    struct student s[count], tmp;
    for (int k = 0; k < count; k++)
    {
        fscanf(fp, "%s %lld %lld %s %f\n", s[k].name, &s[k].eno, &s[k].mo, s[k].branch, &s[k].cpi);
    }

    for (int k = 0; k < count; k++)
    {
        for (int l = k + 1; l < count; l++)
        {
            if (s[k].cpi < s[l].cpi)
            {
                tmp = s[k];
                s[k] = s[l];
                s[l] = tmp;
            }
        }
    }
    fclose(fp);
    for (int k = 0; k < count; k++)
    {
        printf("%s %lld %lld %s %0.2f\n", s[k].name, s[k].eno, s[k].mo, s[k].branch, s[k].cpi);
    }
    display();
}