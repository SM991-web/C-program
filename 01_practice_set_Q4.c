#include <stdio.h>

int main(){
    float P , R , T;
    printf("The principal amount:");
    scanf("%f",&P);
    printf("Rate of interest:");
    scanf("%f",&R);
    printf("For time period:");
    scanf("%f",&T);
    printf("The simple interest is:%f",P*R*T);
    
    return 0;

}