#include <stdio.h>
#include<stdlib.h>
int main(){
  FILE *fp=NULL;
  char ch;
  
fp=fopen("D:\\coding\\code program\\c program\\Hacker rank practise\\mila.txt","w");
    printf("enter the text ;\n");
    
while((ch=getchar()) != EOF)
fputc(ch,fp);
   fclose(fp) ;


}