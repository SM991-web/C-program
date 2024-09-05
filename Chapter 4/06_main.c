#include <stdio.h>

int main(){
    int n,i=0;
    printf("Enter value for n: ");
    scanf("%d", &n);
    do
    {
        printf("Print i: %d\n", i);
        i++;
    } while (i <= n);
    
    return 0;
}
