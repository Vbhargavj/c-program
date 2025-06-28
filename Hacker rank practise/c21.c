#include <stdio.h>

int main(void) {
	// your code goes here
    int n;
	scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        if(a>98){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
	return 0;
}

