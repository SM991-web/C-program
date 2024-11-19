#include <stdio.h>
#include <stdlib.h>

int sum(int* a, int* b){
    *a=5;
    return *a+*b;
}
int sum_1(int a, int b){
    a=5;
    return a+b;
}
int main(){
    system("cls");
    int x;
    printf("Enter: ");
    scanf("%d", &x);
    
    int y;
    printf("Enter: ");
    scanf("%d", &y);

    printf("Value of x is %d\n",x);
    sum(&x,&y);
    printf("Value of x is %d\n",x);
    
    printf("Value of x is %d\n",x);
    sum_1(x,y);
    printf("Value of x is %d\n",x);
    
    return 0;

}