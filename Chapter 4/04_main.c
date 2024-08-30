#include <stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d\n",i);
    i = i + 5;
    printf("The value of i is %d\n",i);
    /*
    printf("The value of i is %d\n",i++);
    i++ prints i first and then increments (Post Increment Operator)
    ++i increments first and then prints i (Pre Increment Operator)*/
    printf("The value of i is %d\n",++i);
    return 0;

}