#include <stdio.h>

int main(){
    int n=10 ;
    
    // printf("Table of %d\n",n);
    for(int i=10;i;i--)
    {
        printf("%d x %d = %d\n",i,n,(i*n));
    }
    return 0;

}