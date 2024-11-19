#include <stdio.h>
#include <stdlib.h>

int pointer_to_pointer(int a){
    int* p=&a;
    int** m=&p;
    printf("The Value of x is %d\n",a);
    printf("The Value of x stored in p is %p\n",&a);
    printf("The Value of p stored in m is %p\n",(void**)m);
    return 0;
}

int main(){
    system("cls");
    int x;
    printf("Enter: ");
    scanf("%d", &x);
    pointer_to_pointer(x);
    
    return 0;
}