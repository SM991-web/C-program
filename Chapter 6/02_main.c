#include <stdio.h>

int main(){
    char i;
    char* j;
    float k;
    float* l;
    printf("Enter Character:");
    scanf("%d",&i);
    printf("Enter Character:");
    scanf("%d",&l);
    printf("The address of i is %p",&i);
    printf("The address of i is %",&i);
    printf("The address of i is %",&i);
    return 0;

}