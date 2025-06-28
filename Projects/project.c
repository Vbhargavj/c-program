#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
void gotoxy(int, int);
void menu();
void add();
void view();
void search();
void modify();
void deleterec();
// creating structure
struct student
{
    char name[20];
    char mobile[10];
    int rollno;
    char course[20];
    char branch[20];
};
int main()
{
    printf("NAME : KAVAD ARUN VASHARAMBHAIs  ENROLLMENT NO. : 210210116005");
    gotoxy(15, 8);
    printf("<---STUDENT MANAGEMENT SYSTEM--->");
    gotoxy(19, 15);
    printf("PRESS ANY KEY TO CONTINUE ");
    getch();
    menu();
    return 0;
}
void menu()
{
    int choice;
    system("cls");
    gotoxy(10, 3);
    printf("<---MENU--->");
    gotoxy(10, 5);
    printf("ENTER APPROPRIATE NUMBER TO PERFORM FOLLOWING TASK");
    gotoxy(10, 7);
    printf("1 : ADD RECORD");
    gotoxy(10, 8);
    printf("2 : VIEW");
    gotoxy(10, 9);
    printf("3 : SEARCH");
    gotoxy(10, 10);
    printf("4 : MODIFY RECORD");
    gotoxy(10, 11);
    printf("5 : DELETE");
    gotoxy(10, 12);
    printf("6 : EXIT");
    gotoxy(10, 15);
    printf("ENTER YOUR CHOICE");
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
        modify();
        break;
    case 5:
        deleterec();
        break;
    case 6:
        exit(1);
        break;
    default:
        gotoxy(10, 17);
        printf("INVALID CHOICE");
    }
}
void add()
{
    FILE *fp;
    struct student std;
    char another = 'y';
    system("cls");
    fp = fopen("record.txt", "ab+");
    if (fp == NULL)
    {
        gotoxy(10, 5);
        printf("ERROR OPENING FILE");
        exit(1);
    }
    fflush(stdin);
    while (another == 'y')
    {
        gotoxy(10, 3);
        printf("<---ADD THE RECORD OF STUDENT--->");
        gotoxy(10, 5);
        printf("ENTER DETAILS OF STUDENT");
        gotoxy(10, 7);
        printf("ENTER THE NAME :");

        gets(std.name);
        gotoxy(10, 8);
        printf("ENTER MOBILE NUMBER");
        gets(std.mobile);
        gotoxy(10, 9);
        printf("ENTER THE ROLL NUMBER :");
        scanf("%d", &std.rollno);
        fflush(stdin);
        gotoxy(10, 10);
        printf("ENTER THE COURSE :");
        gets(std.course);
        gotoxy(10, 11);
        printf("ENTER THE BRANCH :");
        gets(std.branch);
        fwrite(&std, sizeof(std), 1, fp);
        gotoxy(10, 15);
        printf("WANT TO ADD ANOTHER RECORD? THEN PRESS 'Y' ELSE 'N'.");
        fflush(stdin);
        another = getch();
        system("cls");
        fflush(stdin);
    }
    fclose(fp);
    gotoxy(10, 18);
    printf("PRESS ANY KEY TO CONTINUE.");
    getch();
    menu();
}
void view()
{
    FILE *fp;
    int i = 1, j;
    struct student std;
    system("cls");
    gotoxy(10, 3);
    printf("<---VIEW RECORD--->");
    gotoxy(10, 5);
    printf("S.NO    NAME OF STUDENT    MOBILE NO.    ROLL NO.   COURSE BRANCH");
    gotoxy(10, 6);
    printf("--------------------------------------------------------------------------");
    fp = fopen("record.txt", "rb+");
    if (fp == NULL)
    {
        gotoxy(10, 8);
        printf("ERROR IN OPENING FILE.");
        exit(1);
    }
    j = 8;
    while (fread(&std, sizeof(std), 1, fp) == 1)
    {
        gotoxy(10, j);
        printf("%-7d%-22s%-12s%-9d%-12s%-12s", i, std.name, std.mobile, std.rollno, std.course, std.branch);
        i++;
        j++;
    }
    fclose(fp);
    gotoxy(10, j + 3);
    printf("PRESS ANY KEY TO CONTINUE.");
    getch();
    menu();
}
void search()
{
    FILE *fp;
    struct student std;
    char stname[20];
    system("cls");
    gotoxy(10, 3);
    printf("<---SEARCH RECORD--->");
    gotoxy(10, 5);
    printf("ENTER NAME OF STUDENT :");
    fflush(stdin);
    gets(stname);
    fp = fopen("record.txt", "rb+");
    if (fp == NULL)
    {
        gotoxy(10, 6);
        printf("ERROR IN OPENING FILE");
        exit(1);
    }
    while (fread(&std, sizeof(std), 1, fp) == 1)
    {
        if (strcmp(stname, std.name) == 0)
        {
            gotoxy(10, 8);
            printf("NAME : %s", std.name);
            gotoxy(10, 9);
            printf("MOBILE NUMBER : %s", std.mobile);
            gotoxy(10, 10);
            printf("ROLL NO : %d", std.rollno);
            gotoxy(10, 11);
            printf("COURSE : %s", std.course);
            gotoxy(10, 12);
            printf("BRANCH : %s", std.branch);
        }
        fclose(fp);
        gotoxy(10, 16);
        printf("PRESS ANY KEY TO CONTINUE.");
        getch();
        menu();
    }
}
void modify()
{
    char stname[20];
    FILE *fp;
    struct student std;
    system("cls");
    gotoxy(10, 3);
    printf("<---MODIFY RECORD--->");
    gotoxy(10, 5);
    printf("ENTER NAME OF STUDENT TO MODIFY :");
    fflush(stdin);
    gets(stname);
    fp = fopen("record.txt", "rb+");
    if (fp == NULL)
    {
        gotoxy(10, 6);
        printf("ERROR OPENING FILE");
        exit(1);
    }
    rewind(fp);
    fflush(stdin);
    while (fread(&std, sizeof(std), 1, fp) == 1)
    {
        if (strcmp(stname, std.name) == 0)
        {
            gotoxy(10, 7);
            printf("ENTER NAME :");
            gets(std.name);
            gotoxy(10, 8);
            printf("ENTER MOBILE NUMBER :");
            gets(std.mobile);
            gotoxy(10, 9);
            printf("ENTER ROLL NO. :");
            scanf("%d", &std.rollno);
            gotoxy(10, 10);
            printf("ENTER COURSE :");
            fflush(stdin);
            gets(std.course);
            gotoxy(10, 11);
            printf("ENTER BRANCH :");
            fflush(stdin);
            gets(std.branch);
            fseek(fp, -sizeof(std), SEEK_CUR);
            fwrite(&std, sizeof(std), 1, fp);
            break;
        }
        fclose(fp);
        gotoxy(10, 16);
        printf("PRESS ANY KEY TO CONTINUE");
        getch();
        menu();
    }
}
void deleterec()
{
    char stname[20];
    FILE *fp, *ft;
    struct student std;
    system("cls");
    gotoxy(10, 3);
    printf("<---DELETE RECORD--->");
    gotoxy(10, 5);
    printf("ENTER NAME OF STUDENT TO DELETE RECORD :");
    fflush(stdin);
    gets(stname);
    fp = fopen("record.txt", "rb+");
    if (fp == NULL)
    {
        gotoxy(10, 6);
        printf("ERROR IN OPENING FILE");
        exit(1);
    }
    ft = fopen("temp.txt", "wb+");
    if (ft == NULL)
    {
        gotoxy(10, 6);
        printf("ERROR IN OPENING FILE");
        exit(1);
    }
    while (fread(&std, sizeof(std), 1, fp) == 1)
    {
        if (strcmp(stname, std.name) != 0)
            fwrite(&std, sizeof(std), 1, ft);
    }
    fclose(fp);
    fclose(ft);
    remove("record.txt");
    rename("temp.txt", "record.txt");
    gotoxy(10, 10);
    printf("PRESS ANY KEY TO CONTINUE.");
    getch();
    menu();
}
void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}