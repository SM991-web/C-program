#include <stdio.h>
#include <stdlib.h>

int fibonacci(int);

int fibonacci(int n){

    if (n==1 || n==2)
    {
        return n-1;
    }
    int x = fibonacci(n-1) + fibonacci(n-2);
    return x;
}

int main(){
    system("cls");
    int n;
    printf("Enter value for nth term:");
    scanf("%d",&n);
    printf("Fibonacci sequence for %dth term: %d",n,fibonacci(n));
    system("pause");
    return 0;

}
// #include <stdio.h>

// int main(){
//     int a = 4;
//     printf("%d %d %d\n",a,++a,a++);
//     return 0;

// }