#include <stdio.h>
#include <stdlib.h>

void renam();
void empty();
void user();
void add();
void exi();
void display();
void filesave();
void view();
void delet();
void liveview();
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
        // update();
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
        // shor();
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

    filesave();
    i++;
    display();
}
void filesave()
{
    FILE *f = fopen("filesave.txt", "a");
    fprintf(f, "%s %lld %lld %s %0.2f\n", std[i].name, std[i].eno, std[i].mo, std[i].branch, std[i].cpi);
    printf("DATA SUCESSFULLY STORE IN FILE \n");
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
    for (int j = 0; j < i; j++)
    {
        flag = 1;
        printf("%s %lld %lld %s %0.2f\n", std[j].name, std[j].eno, std[j].mo, std[j].branch, std[j].cpi);
    }
    if (flag == 0)
    {
        printf("file is empty\n");
    }
    display();

    // liveview();
}
// void liveview()
// {
//     for (int j = 0; j < i; j++)
//     {
//         flag = 1;
//         printf("%s %lld %lld %s %0.2f\n", std[j].name, std[j].eno, std[j].mo, std[j].branch, std[j].cpi);
//     }
//     empty();
// }
// void empty()
// {
//     if (flag == 0)
//     {
//         printf("ohh...Data not found\n ");
//     }
//     display();
// }
// this function is use to search student in file and current structure
long long int buf;
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
    // this loop is use to search student in current structure
    for (int j = 0; j < i; j++)
    {
        if (buf == std[j].eno)
        {
            sflag = 1;
            printf("%s %lld %lld %s %0.2f\n", std[j].name, std[j].eno, std[j].mo, std[j].branch, std[j].cpi);
        }
    }
    // when data not found in file and structure below code execute
    if (sflag == 0)
    {
        printf("Data was not found in the record\n");
    }
    display();
}
void delet()
{
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
        }
        else
        {
            sflag = 1;
            // printf("You are searching this student\n");
            printf("%s %lld %lld %s %0.2f\n", temp.name, temp.eno, temp.mo, temp.branch, temp.cpi);
            fprintf(f, "%s %lld %lld %s %f\n", temp.name, temp.eno, temp.mo, temp.branch, temp.cpi);
        }
    }
    // this loop is use to search student in current structure
    // for (int j = 0; j < i; j++)
    // {
    //     if (buf == std[j].eno)
    //     {
    //         sflag = 1;
    //         printf("%s %lld %lld %s %0.2f\n", std[j].name, std[j].eno, std[j].mo, std[j].branch, std[j].cpi);
    //     }
    // }
    // when data not found in file and structure below code execute
    if (sflag == 0)
    {
        printf("Data was not found in the record\n");
    }
    else
    {
        renam();
    }
    display();
}
void renam()
{
    int result = rename("temp.txt", "filesave.txt");
    int re = remove("temp.txt");
}