#include <stdio.h>
int main()
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
            if (lineCount < 5)
            {
                fprintf(outFile, "%s", line);
            }
            lineCount++;
        }
        fclose(inFile);
        fclose(outFile); // possible you have to remove old file here before
        if (!rename(inFileName, outFileName))
        {
            printf("Rename Error");
        }
    
}