#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct student
{
    char name[100];
    int mobileno[10];
    int rollno;
    char course[20];
    char branch[20];
};

void menu();
void add();
void view();
void search();
void edit();
void sort();

int main()
{
    printf("NAME:PATEL MILANKUMAR DIPAKBHAI    ENROLLMENT NO:210210116052");
    printf("---STUDENT MANAGEMENT SYSTEM---");
    menu();

    return 0;
}
void menu()
{
    int choice;
    system("cls");
    printf("<---MENU--->");
    printf("\nENTER APPROPRIATE NUMBER TO PERFORM FOLLOWING TASK");
    printf("\n1 : ADD RECORD");
    printf("\n2 : VIEW");
    printf("\n3 : SEARCH");
    printf("\n4 : EDIT RECORD");
    printf("\n5 : SORT RECORD");
    printf("\n6 : EXIT");
    printf("\nENTER YOUR CHOICE");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        add();
        break;
    case 2:
        view();
        break;
    case 3:
        search();
        break;
    case 4:
        edit();
        break;
    case 5:
        sort();
        break;
    case 6:
        exit(1);
        break;
    default:
        printf("INVALID CHOICE");
    }
}
void add()
{
    FILE *fp = fopen("D:\\coding\\code program\\c program\\Hacker rank practise\\student.txt", "w");
    char name[200];
    int mobileno;
    int enrollno;
    char course[200];
    char branch[200];

    printf("ENTER YOUR NAME:");
    scanf("%s", name);
    fputs(name, fp);
    printf("\nENTER YOUR MOBILE NUMBER :");
    scanf("%d", &mobileno);
    putw(mobileno, fp);
    // fscanf(fp, "%d", &mobileno);
    // fputs(mobileno,fp);
    printf("\nENTER YOUR ENROLLMENT NUMBER:");
    scanf("%d", &enrollno);
    putw(enrollno, fp);
    // fputs(enrollno,fp);
    printf("\nENTER YOUR COURSE :");
    scanf("%S", course);
    fputs(course, fp);
    printf("\nENTER YOUR BRANCH :");
    scanf("%s", branch);
    fputs(branch, fp);
}
void view()
{
    FILE *fp;
    char ch;
    fp = fopen("D:\\coding\\code program\\c program\\Hacker rank practise\\student.txt", "r");
    if (fp == NULL)
        printf("Error OPENING FILE");
    else
    {
        do
        {
            ch = getc(fp);
            printf("%c", ch);
        } while (ch != EOF);
        fclose(fp);
    }
}
void search()
{
}
void edit()
{
}
void sort()
{
}