#include <stdio.h>

int main(){
    int n ;
    printf("Enter number:");
    scanf("%d",&n);
    printf("Table of %d\n",n);
    for(int i=10;i>=0;i--)
    {
        printf("%d x %d = %d\n",i,n,(i*n));
    }
    return 0;

}
// #include <stdio.h>

// int main(){
//     int i = 1, n; 
//     printf("Enter Number:");
//     scanf("%d", &n);  

//     printf("Table of %d\n", n);  
//     do {
//         printf("%d x %d = %d\n", i, n, (n * i));  
//         i++;  
//     } while (i <= 10);  
    
//     return 0;
// }