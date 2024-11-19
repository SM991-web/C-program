#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int x;
    int* y=&x;
    int** z=&y;
    printf("Enter: ");
    scanf("%d", &x);
    printf("The value of i is %u\n",x);
    printf("The value of i is %d\n",*y);
    printf("The value of i is %d\n",*(&x));
    printf("The value of i is %d\n",**(&y));
    printf("The value of i is %d\n",**z);
    return 0;
}