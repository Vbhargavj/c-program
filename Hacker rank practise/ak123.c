#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>



void main(){
FILE *fp;
 fp= fopen("student.txt", "w");
char name[30];
int mobileno;
int enrollno[15];
char course[20];
char branch[20];

printf("ENTER YOUR NAME:");
scanf("%s", name);
//fputs(name,fp);
printf("\nENTER YOUR MOBILE NUMBER :");
scanf("%d", &mobileno);
//fputs(mobileno,fp);

//fputs(enrollno,fp);
//fputs(course,fp);
printf("\nENTER YOUR BRANCH :");
scanf("%s", branch);
//fputs(branch,fp);

printf("\nENTER YOUR ENROLLMENT NUMBER:");
scanf("%s", enrollno);

printf("\nENTER YOUR COURSE :");
scanf("%S", course);

}
