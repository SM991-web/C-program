// #include <stdio.h>

// int sum(int, int);

// int main() {
//     int a, b;
//     printf("Enter value for a: ");
//     scanf("%d", &a);
//     printf("Enter value for b: ");
//     scanf("%d", &b);
//     int c = sum(a, b);  
//     printf("Result %d + %d is: %d\n", a, b, c);
//     return 0;
// }
// int sum(int a, int b) {
//     return a + b;  
// }

#include <stdio.h>

int sum(int,int);

int sum(int a, int b){
    // printf("The sum is:%d\n",a+b);
    return a+b;
}    
int main(){
    int a=2,b=3;
    int c=sum(a,b);
    printf("%d",c);
    int a1=34,b1=13;
    sum(a1,b1);
    printf("%d",c1);
    int a2=23,b2=335;
    sum(a2,b2);
    printf("%d",c2);
    return 0;

}