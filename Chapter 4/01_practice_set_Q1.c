#include <stdio.h>

int main(){
    int n ;
    printf("Enter number:");
    scanf("%d",&n);
    // printf("\n");
    printf("Table of %d\n",n);
    for(int i=0;i<=10;i++)
    {
        printf("%d x %d = %d\n",i,n,(i*n));
    }
    return 0;

}