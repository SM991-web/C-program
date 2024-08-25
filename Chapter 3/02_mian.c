#include <stdio.h>

int main(){
    int a = 1 ,b = 1;
    printf("The value of %d and %d is %d\n",a,b,a&&b);
    printf("The value of %d or %d is %d\n",a,b,a||b);
    printf("The value of not(%d) is %d\n",a,!a);
    

    return 0;

}