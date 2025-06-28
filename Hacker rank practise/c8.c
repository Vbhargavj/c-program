#include <stdio.h>
#include<stdlib.h>
int main(void) {
	// your code goes here
 int n;
    scanf("%d", &n);

    int *ary = (int *)malloc(n *  sizeof(int));
    int *arr = (int *)malloc(n *  sizeof(int));
    for (int i = 0; i < n; i++)
    {
          scanf("%d", &ary[i]);
          scanf("%d", &arr[i]);
          fflush(stdin);
    }
     for (int i = 0; i < n; i++){
        int s = arr[i]-ary[i];
        if(s<0) {
            s=(-1)*s;
       }
      printf("%d\n",s);
       }
	return 0;
}