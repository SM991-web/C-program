#include <stdio.h>

int main(){
    int i=1,n,a=1;
    printf("Enter Number");
    scanf("%d",&n);
    while (i<=n)
    {
        a*=i;
        i++;

    }
    printf("Factorial %d:%d",n,a);
    return 0;

}
