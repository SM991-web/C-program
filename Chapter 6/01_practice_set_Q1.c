#include <stdio.h>
#include <stdlib.h>


int main(){
    system("cls");
    int x;
    printf("Enter: ");
    scanf("%d", &x);
    int* y;
    y=&x;

    printf("Address of x is %p\n",&x);
    printf("Address of x is %u\n",*y);
    printf("Address of x is %u\n",y);

    


    return 0;
}