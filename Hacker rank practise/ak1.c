#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *fp=NULL;

    fp=fopen("D:\\coding\\code program\\c program\\Projects\\record.txt","r");

    if(fp ==NULL){
        printf("error openingfile\n");
        exit(1);
    }
char str[50];
char ch;
//gets(str);
//rewind(fp);

while(!feof(fp))
{
  ch = fgetc(fp);
  // ch=fgetc(fp);
   printf("%c",ch);
}
//fputs("arun",fp);
fclose(fp);
return 0;
}