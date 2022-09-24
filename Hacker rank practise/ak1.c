#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[30];
    float percentage;

} stu1, stu2;

int main()
{
    FILE *fp = NULL;
    int i, n;
    fp = fopen("ak.txt", "r");
    // printf("enter the number of data : ");
    // scanf("%d", &n);
    
    //  for (i = 0; i <= n; i++)
    // {
    //     printf("enter name : ");
    //     scanf("%s", stu1.name);
    //     printf("\nenter percentage : "); 
    //     scanf("%f", &(stu1.percentage));
    //     fprintf(fp," name : %s\n percentage : %f\n\n", stu1.name, stu1.percentage);
    // }
 printf("name\tpercentage\n\n");
 while(fscanf(fp,"%s%f",&stu1.name,stu1.percentage) != EOF) printf("%s\t%f",stu1.name,stu1.percentage);
    fclose(fp);
}