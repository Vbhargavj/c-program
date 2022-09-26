#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct student
{
    char name[100];
    int mobileno[10];
    int enrollno;
    char course[20];
    char branch[20];
};

void menu();
void add();
void view();
void search();
void edit(){

}
void sort(){

}

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
    FILE *fp = fopen("studentinfo.txt", "w");
    int choice;
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
        // putw(mobileno, fp);
        fprintf(fp, "%d", &mobileno);
        // fputs(mobileno,fp);
        printf("\nENTER YOUR ENROLLMENT NUMBER:");
        scanf("%d", &enrollno);
        fprintf(fp, "%d", &enrollno);
        // putw(enrollno, fp);
        // fputs(enrollno,fp);
        printf("\nENTER YOUR COURSE :");
        scanf("%S", course);
        fputs(course, fp);
        printf("\nENTER YOUR BRANCH :");
        scanf("%s", branch);
        fputs(branch, fp);
    //   printf("");
    fflush(stdin);
    
    fclose(fp);
    fwrite(&choice, sizeof(choice), 1, fp);
    printf("\n\n\t\t\tENTER YOUR NEEDED CHOICE:");
    menu();
}
void view()
{
    FILE *fp;
    system("cls");
    // char ch;
    struct student detail;
    printf("\n**********VIEW RECORD *********");
    printf("\nS.NO      NAME OF STUDENT   MOBILE NO    ENROLL NO    COURSE     BRANCH");   
    printf("\n---------------------------------------------------");
    fp = fopen("studentinfo.txt", "rb+");
    if (fp == NULL){
        printf("Error OPENING FILE");
        // exit(1);
        }

while(fread(&detail, sizeof(detail), 1, fp)==1){
    // do
    // {
    //      printf("ENTER YOUR NAME:  ");
        printf("%s", &detail.name);
    //     printf("\nENTER YOUR MOBILE NUMBER :  ");
        printf("%d", &detail.mobileno);
    //     // printf("\nENTER YOUR ENROLLMENT NUMBER:  ");
         printf("%d", &detail.enrollno);
    //     printf("\nENTER YOUR COURSE :  ");
        printf("%S", detail.course);
    //     printf("\nEN&TER YOUR BRANCH :  ");
        printf("%s", &detail.branch);
    //             ch = getc(fp);
    //             printf("%c", ch);
        printf("\t\t\tRECORD STORED SUCCESSFUL");
}
fclose(fp);
printf("\n\n\t\tENTER YOUR NEEDED CHOICE");
menu();

    // else
    // {
        // break;
    // }

    // fwrite(&ch, 1, sizeof(char), fp);
//  } while (ch != EOF);
}
void search()
{
    FILE *fp;
    fp = fopen("mdpatel.txt", "r");
    struct student detail;
    char name[100];
    int found = 0;

    printf("Searching students...");
    printf(" ENTER NAME : ");
    scanf("%s", name);
    while(fread(&detail, sizeof(detail), 1, fp) ){
    if (detail.name == name)
    {
        found 1;
        printf("%s", detail.name);
        printf("%d", &detail.mobileno);
// printf("%d", &detail.enrollno);
        printf("%S", detail.course);
     printf("%s", detail.branch);
    }
}
if(!found){
printf("RECORD ERROR");
fclose(fp);
}
// void edit()
// {
// FILE *fp,*fp1;
//     fp = fopen("mdpatel.txt", "r");
//     fp1 = fopen("temp.txt", "r");
//     struct student detail;
//     char name[100];
//     int found = 0;

//     printf(" SORT THE STUDENT DETEILS\n");
//     printf(" ENTER NAME : ");
//     scanf("%s", name);
//     while(fread(&detail, sizeof(student), 1, fp) ){
//     if (detail.name ==name)
//     {
//         found 1;
//           }
//           else{
//          fwrite(&detail,sizeof(student), 1, fp1);}
// }fclose(fp);
// fclose(fp1);
// if(found){
//  fp1= fopen("temp.txt", "r");
//  fp= fopen("mdpatel.txt", "r");

//  while(fread(&detail, sizeof(student), 1, fp) );
//  fwrite(&detail,sizeof(student), 1, fp);
// }
// else{
// printf("ERROR RECORD");
// }fclose(fp);
// fclose(fp1);

// }
// void sort()
// {
//     FILE *fp;
// //     fp = fopen("mdpatel.txt", "r");
// //     fp1 = fopen("temp.txt", "r");
// //     struct student detail;
// //     char name[100];
// //     int found = 0;

// //     printf("SORT THE STUDENT DETEILS\n");
// //     printf(" ENTER NAME : ");
// //     scanf("%s", name);
// //     while(fread(&detail, sizeof(student), 1, fp) ){
// //     if (detail.name ==name)
// //     {
// //         found 1;

// //     }else{
// //     fwrite(&detail,sizeof(student), 1, fp1);}

// // fclose(fp);
// // fclose(fp1);
// // if(found){
// //  fp1= fopen("temp.txt", "r");
// //  fp= fopen("mdpatel.txt", "r");

// //  while(fread(&detail, sizeof(student), 1, fp1) ){
// //  fwrite(&detail,sizeof(student), 1, fp);
// // }
// // }fclose(fp);
// // fclose(fp1);
// // }