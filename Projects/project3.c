#include <stdio.h>
#include <stdlib.h>

int i = 0;
struct student
{
    char name[25];
    char branch[20];
    int eno;
    int mno;
    float cpi;
};

void view()
{
    printf("view");
}
void set(){
    char se[]="STUDENT NAME | ENROLLMENT NUMBER | MOBILE NUMBER | CPI | BRANCH";
    FILE *f = fopen("vw.txt", "W");
    fprintf(f, "%s\n", se);   
}

void add()
{
    set();
    struct student std[5];
    FILE *f = fopen("view.txt", "a");
    printf("\nEnter student name : ");
    fflush(stdin);
    // fgets(name, sizeof(name), stdin);
    scanf("%[^\n]", std[i].name);
    fprintf(f, "%s  ", std[i].name);
    printf("\nEnter student enrollment number : ");
    scanf("%d", &std[i].eno);
    fprintf(f, "%d  ", &std[i].eno);
    printf("\nEnter student mobile number : ");
    scanf("%d", &std[i].mno);
    fprintf(f, "%d  ", std[i].mno);
    printf("Enter student cpi : ");
    scanf("%f", &std[i].cpi);
    fprintf(f, "%0.2f ", std[i].cpi);
    printf("Enter student branch : ");
    scanf("%s", std[i].branch);
    fprintf(f, "%s ", std[i].branch);
    i++;
    
}

void update()
{
    printf("view");
}

void delet()
{
    printf("view");
}

// complete //this is use to terminate the program
void exi()
{
    // goto exit;
    exit(0);
}

void search()
{
    printf("view");
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
        update();
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
    default:
        break;
    }
}
void display()
{
    printf("\n\t-.-.-.Select option to perform an operation.-.-.-.-\n");
    printf("\t\t\t1 : VIEW \n");
    printf("\t\t\t2 : ADD \n");
    printf("\t\t\t6 : UPDATE \n");
    printf("\t\t\t4 : DELETE \n");
    printf("\t\t\t5 : SEARCH \n");
    printf("\t\t\t6 : EXIT \n");
    user();
}

int main()
{
    display();

    return 0;
}