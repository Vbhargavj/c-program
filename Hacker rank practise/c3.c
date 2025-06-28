#include <stdio.h>
#include<stdlib.h>
int main(void)

 {
	// your code goes here
	int n;
    scanf("%d",&n);
    int *ary;
    ary=(int*)malloc(n*sizeof(int)) ;
     for(int i =0; i<n; i++){
        scanf("%d",&ary[i]);
    }
    for(int i =0; i<n; i++){
    if(ary[i]<300){
        printf("%d\n",3000);
    } 
    else {
         printf("%d\n",10*ary[i]);
    }
    }
    
	return 0;
}