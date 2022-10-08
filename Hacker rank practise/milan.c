#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct student
{
    char name[100];
    int mobileno[10];
    int enrollno;
    char course[200];
    char branch[200];
};

void menu();
void add();
void view(){}
void search(){}
void edit(){}
void sort(){}
struct student detail;
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
    printf("\n<---MENU--->");
    printf("\nENTER APPROPRIATE NUMBER TO PERFORM FOLLOWING TASK");
    printf("\n1 : ADD RECORD");
    printf("\n2 : VIEW");
    printf("\n3 : SEARCH");
    printf("\n4 : EDIT RECORD");
    printf("\n5 : SORT RECORD");
    printf("\n6 : EXIT");
    printf("\n---------------------");
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
   
    FILE *fp = fopen("D:\\coding\\code program\\c program\\Hacker rank practise\\studentinfo.txt", "w");
    int choice;
    struct student detail;
    char name[200];
    int mobileno;
    int enrollno;
    char course[200];
    char branch[200];
    
    
        printf("ENTER YOUR NAME:");
        scanf("%s",&detail.name);
        fputc(name, fp);
        printf("\nENTER YOUR MOBILE NUMBER :");
        scanf("%d", &detail.mobileno);
        fprintf(fp, "%d", &mobileno);
        
        printf("\nENTER YOUR ENROLLMENT NUMBER:");
        scanf("%d", &detail.enrollno);
        fprintf(fp, "%d", &enrollno);
        
        printf("\nENTER YOUR COURSE :");
        scanf("%S", &detail.course);
        fputc(course, fp);
        printf("\nENTER YOUR BRANCH :");
        scanf("%s", &detail.branch);
        fputc(branch, fp);
   
    
    fclose(fp);
    fwrite(&choice, sizeof(choice), 1, fp);
    printf("\n\n\t\t\tENTER YOUR NEEDED CHOICE:");
    menu();
}