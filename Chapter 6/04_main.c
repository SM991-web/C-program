#include <stdio.h>
int sum(int,int);
int main(){
    int x;
    printf("Enter: ");
    scanf("%d", &x);
    int* j = &x;
    int** k = &j;

    printf("The value of %d is : %d\n", x , *j);
    printf("The value of %d is : %d\n", x , *(&i));
    return 0;
}