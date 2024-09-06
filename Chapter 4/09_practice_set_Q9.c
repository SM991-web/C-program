#include <stdio.h>

int main(){
    int a=1,n,i=1;
    printf("Enter number:");
    scanf("%d",&n);
    for (; i<=n; i++)
    {
        a*=i;
        printf("factorial  %d : %d",i,a);
    }
    printf("factorial of %d : %d",n,a);
    
    return 0;

}