#include <stdio.h>

int main(){
    int Year;
    printf("Enter Year:");
    scanf("%d",&Year);
    if (Year%4==0 && Year%10!=0 || Year%400==0)
    {
        printf("%d is leap year ",Year);
    }
    else{
        printf("%d is not leap year ",Year);
    }
    return 0;

}