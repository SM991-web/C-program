#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int n;
    printf("Enter To print * =");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (2*i)-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;

}