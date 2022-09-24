#include<stdio.h>
typedef struct _student_{
    int enroll;
    char name[100];
    float spi;
}student;

void create(){
    student *s;
    file  *fp;
    int n,int n,i,j;
    printf("how many students in your class?\n");
    scanf("%d",&n);

    s=(student)calloc(n*sizeof(student));
    fp=fopen("studentdata.txt", "w");

    for(i=0;i<n;i++){
        printf("enter the enroll number: ");
        scanf("%d",&s[i]);
        fflush(stdin);
        printf("enter name: " \n);
        scanf("%s",&s[i].name);
        printf("enter the spi of the student: " \n);
        scanf("%s",&s[i].spi);
        fwrite(&s[i],sizeof(student),1,fp);

}fclose(fp);
} void diplay(){
    student s1;
    file*fp;
    fp=fopen("studentdata.txt","r");
}