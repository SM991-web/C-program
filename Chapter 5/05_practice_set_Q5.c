#include <stdio.h>
#include <stdlib.h>

int sum_natural_number(int);

int sum_natural_number(int n){
    if (n==1){
        return 1;
    }
    return sum_natural_number(n-1)+n;
}


int main(){
    system("cls");
    int n;
    printf("Enter n terms for summation of natural number:");
    scanf("%d",&n);
    printf("Sum of %d natural number is: %d",n,sum_natural_number(n));
    return 0;

}