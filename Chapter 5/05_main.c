#include <stdio.h>
#include <stdlib.h>


int factorial(int); 

int factorial(int n)
{
    
    if (n==1 || n==0)
    {
        return 1;
    }
    
    return factorial(n-1)*n;
    
}



int main(){
    system("cls");
    int a;
    printf("Enter number:");
    scanf("%d",&a);
    printf("Factorial of %d is : %d\n",a,factorial(a));
    system("pause");
    return 0;

}