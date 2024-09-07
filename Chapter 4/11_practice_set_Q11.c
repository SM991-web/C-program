#include <stdio.h>

int main(){
    int n,p=0;
    printf("Enter Number:");
    scanf("%d",&n);
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {   
            p=1;
            break;
        }
        
    }
    if (p)
    {           
        printf("%d is not  prime",n);
    }
    else
    {
        printf("%d is  prime",n);
    }
    
    
    return 0;

}