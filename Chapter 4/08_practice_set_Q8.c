#include <stdio.h>

int main(){
    int n,i=0,sum=0;
    printf("Enter number:");
    scanf("%d",&n);
    for (; i <=10 ; i++)
    {       
        printf("%d x %d:%d\n",i,n,(n*i));
        sum+=(n*i);
        
    }
    printf("Sum of multiple of %d:%d",n,sum);
    
    return 0;

}