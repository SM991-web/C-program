#include <stdio.h>
#include <stdlib.h>

int value_by_reference(int* a) {
    printf("Enter value:");
    scanf("%d",&(*a));
    return *a; 
}

int main() {
    system("cls"); 
    int x;
    printf("Enter: ");
    scanf("%d", &x); 

    printf("The value returned by the function is: %d\n",value_by_reference(&x));

    return 0;
}
