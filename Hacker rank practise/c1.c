#include <stdio.h>
#include<stdlib.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	int* ary = (int*)malloc((n*2)*sizeof(int)) ;
	
	for(int i=0; i<n; i++){
	    for (int j=0; j<2; j++){
	        scanf("%d",&ary[i*2+j]);
	    }
	}
	for(int i=0; i<n; i++){
	    for (int j=0; j<1; j++){
	        if(ary[i*2+j]<ary[i*2+j+1])
	        {
	            printf("B");
	        }
	        else{
	             printf("A");
	        }
	    }
	}
	return 0;
}
