// // #include <stdio.h>

// // struct student
// // {
// //     int n, x;
// //     char name[10];
// // } std[3];

// // int main()
// // {

// //     for (int i = 0; i < 3; i++)
// //     {
// //         scanf("%d", &std[i].n);
// //         scanf("%d", &std[i].x);
// //         scanf("%s", std[i].name);
// //     }
// //     FILE *f = fopen("file.txt","w");
// //     fwrite(&std[0],sizeof(struct student),1,f);

// //     return 0;
// // }
// // C program for writing
// // struct to file
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// // a struct to read and write
// struct person
// {
//     int id;
//     char fname[20];
//     char lname[20];
// };

// int main()
// {
//     FILE *outfile;

//     // open file for writing
//     outfile = fopen("person.dat", "w");
//     if (outfile == NULL)
//     {
//         fprintf(stderr, "\nError opened file\n");
//         exit(1);
//     }

//     struct person input1 = {1, "rohan", "sharma"};
//     struct person input2 = {2, "mahendra", "dhoni"};

//     // write struct to file
//     fwrite(&input1, sizeof(struct person), 1, outfile);
//     fwrite(&input2, sizeof(struct person), 1, outfile);

//     if (fwrite != 0)
//         printf("contents to file written successfully !\n");
//     else
//         printf("error writing file !\n");

//     // close file
//     fclose(outfile);

//     return 0;
// }
#include <stdio.h>

struct student
{
    int n;
    float f;
    char name[10];
} std[2];

int main()
{

    for (int i = 0; i < 2; i++)
    {
        // fflush(stdin);
        scanf("%d", &std[i].n);
        scanf("%f", &std[i].f);
        scanf("%s", std[i].name);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("%s\n", std[i].name);
        printf("%f\n", std[i].f);
        printf("%d\n", std[i].n);
        printf("\n");
    }
    FILE *f = fopen("filename.txt", "w");
    for (int i = 0; i < 2; i++)
    {
        fprintf(f, "%s ", std[i].name);
        fprintf(f, "%0.2f ", std[i].f);
        fprintf(f, "%d\n", std[i].n);
    }
    fprintf(f, "%s %d %0.2f", std[1].name, std[1].n, std[1].f);

    return 0;
}
