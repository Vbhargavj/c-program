#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void us();
void display();
#define MAX 256

int main()
{
    for (int i = 0; i < 3; i++)
    {
        char *inFileName = "test.txt";
        char *outFileName = "tmp.txt";
        FILE *inFile = fopen(inFileName, "r");
        FILE *outFile = fopen(outFileName, "w+");
        char line[1024]; // maybe you have to user better value here
        int lineCount = 0;
        if (inFile == NULL)
        {
            printf("Open Error");
        }
        while (fgets(line, sizeof(line), inFile) != NULL)
        {
            if (lineCount <= 5)
            {
                fprintf(outFile, "%s", line);
            }
            lineCount++;
        }
        fclose(inFile);
        fclose(outFile); // possible you have to remove old file here before
        // tmp.txt is our question file
        FILE *que;
        que = fopen("tmp.txt", "r");
        char ch = getc(que);
        while (ch != EOF)
        {
            printf("%c", ch);
            ch = getc(que);
        }
        for (int i = 1; i <= 5; i++)
        {
            int lno, ctr = 0;
            char ch;
            FILE *fptr1, *fptr2;
            char fname[MAX] = "test.txt";
            char str[MAX], temp[] = "temp.txt";
            // printf("\n\n Delete a specific line from a file :\n");
            // printf("-----------------------------------------\n");
            // printf(" Input the file name to be opened : ");
            // scanf("%s",fname);
            fptr1 = fopen(fname, "r");
            if (!fptr1)
            {
                printf(" File not found or unable to open the input file!!\n");
                // return 0;
            }
            fptr2 = fopen(temp, "w"); // open the temporary file in write mode
            if (!fptr2)
            {
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
                // return 0;
            }
            // printf(" Input the line you want to remove : ");
            // scanf("%d", &lno);
            lno = 1;
            lno++;
            // copy all contents to the temporary file except the specific line
            while (!feof(fptr1))
            {
                strcpy(str, "\0");
                fgets(str, MAX, fptr1);
                if (!feof(fptr1))
                {
                    ctr++;
                    /* skip the line at given line number */
                    if (ctr != lno)
                    {
                        fprintf(fptr2, "%s", str);
                    }
                }
            }
            fclose(fptr1);
            fclose(fptr2);
            remove(fname);       // remove the original file
            rename(temp, fname); // rename the temporary file to original name
                                 /*------ Read the file ----------------*/
                                 //    fptr1=fopen(fname,"r");
                                 //             ch=fgetc(fptr1);
                                 //           printf(" Now the content of the file %s is : \n",fname);
                                 //           while(ch!=EOF)
                                 //             {
                                 //                 printf("%c",ch);
                                 //                  ch=fgetc(fptr1);
                                 //             }
            fclose(fptr1);
            /*------- End of reading ---------------*/
        }
        printf("here this is new");
    }
}
