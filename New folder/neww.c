#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE *ptr;

int i, j, a, ch, choice;
int sno;

struct student
{
    char name[20];
    long int enrollment;
    char branch[25];
    int semester;
    float cpi;
} std[2];

void edit()
{
    ptr = fopen("details.txt", "a");
    long int enrollment;

    printf("ENTER THE ENROLLMENT NUMBER OF STUDENT YOU WANT TO CHANGE :");
    scanf("%ld", &std[i].enrollment);

    if (std[i].enrollment == std[j].enrollment)
    {
        printf("\n1.NAME\n2.BRANCH\n3.ENROLLMENT\n4.CPI\n5.SEMESTER \n");

        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:

            printf("Enter the new name : \n");
            scanf("%s", std[j].name);

            break;

        case 2:

            printf("Enter the new branch : \n");
            scanf("%s", std[j].branch);

            break;

        case 3:

            printf("Enter the newroenrollment number : \n");
            scanf("%ld", &std[j].enrollment);

            break;

        case 4:

            printf("Enter the new cpi : \n");
            scanf("%f", &std[j].cpi);

            break;

        case 5:
            printf("\n enter new semester :");
            scanf("%s", &std[j].semester);

            break;
        }

        printf("EDITED SUCCESSFULLY.\n");
    }
}

void delete ()
{

    int a;
    printf("ENTER THE ENROLLMENT NUMBER WHICH YOU WANT TO DELETE:\n");
    scanf("%ld", &std[i].enrollment);

    for (int j = 0; j <= i; j++)
    {
        if (std[i].enrollment == std[j].enrollment)
        {
            for (int k = j; k < 2; k++)
            {
                std[k] = std[k + 1];
                i--;
            }
        }
    }

    printf("ENROLLMENT NUMBER DELETED SUCCESSFULLY\n");
}

int main()
{
    int i, j, a, ch, choice;
    int sno;

    ptr = fopen("details.txt", "a");

    for (i = 0; i < 2; i++)
    {

        printf("Enter name of student %d:\n", i + 1);
        scanf("%s", std[i].name);
        fprintf(ptr, "%s ", std[i].name);

        printf("Enter enrollment of student %d:\n", i + 1);
        scanf("%ld", &std[i].enrollment);
        fprintf(ptr, "%ld ", std[i].enrollment);

        printf("Enter branch of student %d:\n", i + 1);
        scanf("%s", std[i].branch);
        fprintf(ptr, "%s ", std[i].branch);

        printf("Enter semester of student %d:\n", i + 1);
        scanf("%d", &std[i].semester);
        fprintf(ptr, "%d ", std[i].semester);

        printf("Enter cpi of student %d:\n", i + 1);
        scanf("%f", &std[i].cpi);
        fprintf(ptr, "%f ", std[i].cpi);
    }

    do
    {
        printf("\n1.DISPLAY STUDENT DETAILS\n2.STUDENTS BASED ON THIER CPI\n3.SEARCH A SPECIFIC STUDENT\n4.EDIT\n5.DELETE\n6.EXIT\n");
        printf("\n the choice is you want from above:");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("                               STUDENT DETAIL\n");
            printf("-----------|-----------------|-----------------|------------|----------------|------------------|\n");
            printf(" NAME      |    ENROLLMENT   |     BRANCH      |  SEMESTER  |    CPI         |                  |\n");
            printf("-----------|-----------------|-----------------|------------|----------------|------------------|\n");

            for (sno = 0; sno < 2; sno++)
            {
                printf("-----------|-----------------|-----------------|------------|----------------|------------------|\n");
                printf(" %-15s %-17ld %-18s %-12d %-16f \n\n", std[sno].name, std[sno].enrollment, std[sno].branch, std[sno].semester, std[sno].cpi);
                printf("-----------|-----------------|-----------------|------------|----------------|------------------|\n");
            }

            break;

        case 2:

            for (i = 0; i < 2; i++)
            {
                for (j = i + 1; j < 2; j++)
                {
                    if (std[i].cpi >= std[j].cpi)
                    {
                        a = std[i].cpi;
                        std[i].cpi = std[j].cpi;
                        std[j].cpi = a;
                    }
                }
            }
            printf("\n ORDER BASE THEIR CPI IS:");
            for (i = 0; i < 2; i++)
            {
                printf("\t %f", std[i].cpi);
            }

            break;

        case 3:

            printf("\n enter the student number:");
            scanf("%d", &sno);
            sno--;
            printf("                               STUDENT DETAIL\n");
            printf("-----------|-----------------|-----------------|------------|----------------|------------------|\n");
            printf(" NAME      |    ENROLLMENT   |     BRANCH      |  SEMESTER  |    CPI         |                  |\n");
            printf("-----------|-----------------|-----------------|------------|----------------|------------------|\n");

            printf("-----------|-----------------|-----------------|------------|----------------|------------------|\n");
            printf(" %-15s %-17ld %-18s %-12d %-16f \n\n", std[sno].name, std[sno].enrollment, std[sno].branch, std[sno].semester, std[sno].cpi);
            printf("-----------|-----------------|-----------------|------------|----------------|------------------|\n");

            break;

        case 4:

            edit();
            break;

        case 5:

            delete ();
            break;

        case 6:
            exit(1);

        default:
            printf("\n ENTER PROOPER CHOICE");
        }

    } while (ch != 6);

    return 0;
}