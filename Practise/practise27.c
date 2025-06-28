#include<stdio.h>

float pcm(float physics,float chemistry,float maths);
float all(float physics,float chemistry,float maths,float english,float comp,float k);



int main(){

    float physics,chemistry,maths,comp,english,k;
    
    printf("Enter you subject mark to know percantage\n");
    printf("physics\n");
    scanf("%f",&physics);
    printf("chemistry\n");
    scanf("%f",&chemistry);
    printf("maths or biology\n");
    scanf("%f",&maths);
    printf("english\n");
    scanf("%f",&english);
    printf("sanskrit or computer\n");
    scanf("%f",&comp);
    printf("Enter the full mark \n");
    scanf("%f",&k);
    printf("main pcm or pcb percantage is %f\n",pcm(physics,chemistry,maths));
    printf("all subject percantage is %f",all(physics,chemistry,maths,english,comp,k));



return 0;


}

float pcm(float physics,float chemistry,float maths){
    return (physics+chemistry+maths)/3;
}
float all(float physics,float chemistry,float maths,float english,float comp,float k){
    return (physics+chemistry+maths+english+comp)*100/k;
}