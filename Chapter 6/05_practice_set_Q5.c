#include <stdio.h>
#include <stdlib.h>

float sum(float* m,float* n){
    return *m+*n;
}

float average(float* m,float* n){
    return ((*m+*n)/2);
}

int main(){
    system("cls");
    float x,y;
    
    printf("Enter: ");
    scanf("%f", &x);
    
    printf("Enter: ");
    scanf("%f", &y);
    
    float a=sum(&x,&y);
    float b=average(&x,&y);

    printf("\tSum of %.2f and %.2f is %.2f\n",x,y,a);
    printf("\tAverage : %.2f\n",b);
    printf("The address of sum is %p and average is %p",(void*)&a,(void*)&b);
    

    return 0;
}