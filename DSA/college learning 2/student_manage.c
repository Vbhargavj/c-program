#include <stdio.h>
#include <stdlib.h>

struct student_manage
{
    long long int ennum;
    long long int mnum;
    char fname[15];
    char mname[15];
    char lname[15];
    char branch[15];
    float cpi;
    int sem;
};

void scanner()
{
    struct student_manage *s1 = (struct student_manage *)malloc(sizeof(struct student_manage));
    printf("Enter your first name\n");
    scanf("%s", s1->fname);

    printf("Enter your middle name name\n");
    scanf("%s", s1->mname);

    printf("Enter your middle name name\n");
    scanf("%s", s1->lname);

    printf("Enter your enrollment number\n");
    scanf("%lld", &s1->ennum);

    printf("Enter your moble number\n");
    scanf("%lld", &s1->mnum);

    printf("Enter your spi\n");
    scanf("%f", &s1->cpi);

    printf("Enter your sem\n");
    scanf("%d", &s1->sem);

    printf("Etner your branch\n");
    scanf("%s", s1->branch);

    FILE *f = fopen("filesave.dat", "r+b");
    fwrite(&s1, sizeof(struct student_manage), 1, f);
    printf("DATA SUCESSFULLY STORE IN FILE \n");
    fclose(f);
}
void check()
{
    FILE *f = fopen("file.dat", "r+b");
    int tem;
    while (fscanf(f, "%d", &tem) != EOF)
    {
        printf("%d\n", tem);
    }
}

void search()
{
    struct student_manage *s1;
    long long int t;
    printf("Enter enrollment number to search in record\n");
    scanf("%lld", &t);

    FILE *f = fopen("filesave.dat", "r+b");
    int i = 0;
    while (fread(&s1, sizeof(struct student_manage), 1, f) != EOF)
    {
        if (s1->ennum == t)
        {
            printf("Your record is \n");
            printf("%lld % s % s % s % lld % 0.2f % s % d", s1->ennum, s1->fname, s1->mname, s1->lname, s1->mnum, s1->cpi, s1->branch, s1->sem);
            fclose(f);
            return;
        }
        if (i > 5)
        {
            break;
        }
    }

    printf("Student record is not found\n");
}
void display()
{
    struct student_manage *s2 = (struct student_manage *)malloc(sizeof(struct student_manage));
    FILE *f = fopen("filesave.txt", "rb");
    fseek(f, 0, SEEK_SET);
    while (fread(&s2, sizeof(struct student_manage), 1, f) != EOF)
    {
        printf("first name : %s\n middle name : %s\n last name : %s \nenrollment number : %lld \nmobile number : %lld \nbranch : %s \nsem: %d \ncpi : %f", s2->fname, s2->mname, s2->lname, s2->ennum, s2->mnum, s2->branch, s2->sem, s2->cpi);
    }
}
int main()
{
    // scanner();
    scanner();
    display();
    // display();

    return 0;
}
