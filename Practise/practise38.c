// this is only count  on 100,50,20,10,5,2,1
#include<stdio.h>


int main(){

    int n;
    // n for total amount 
    printf("Enter the amount ");
    scanf("%d",&n);

    // s for count number of 100  notes
    int s=n/100;
    printf("100 note is %d\n",s);

    // p for count number of 50  notes
    int p=(n-s*100)/50;
    printf("50 notes is %d\n",p);
    
    // v  for count number of 20  notes
    int v=(n-s*100-p*50)/20;
    printf("20 note is %d\n",v);

    // d for count number of 10  notes
    int d=(n-s*100-p*50-v*20)/10;
    printf("10 note is %d\n",d);
   
    // f  for count number of 5  notes
    int f=(n-s*100-p*50-v*20-d*10)/5;
    printf("5 notes is %d\n",f);
   
    // b for count number of 2  notes
    int b=(n-s*100-p*50-v*20-d*10-f*5)/2;
    printf("2  notes is %d\n",b);
   
    // a for count number of 1 notes
    int a=(n-s*100-p*50-v*20-d*10-f*5-b*2);
    printf("1 notes is %d\n",a);

    // total amount for check program 
    int total=s*100+p*50+v*20+d*10+f*5+b*2+a;
    printf("TOTAL amount is %d",total);   
 
return 0;


}