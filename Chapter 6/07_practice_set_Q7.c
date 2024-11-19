#include <stdio.h>
#include <stdlib.h>

// void tem_times(int a){
//     printf("enter value for call by value:");
//     scanf("%d",&a);
//     int s=a*10;
//     printf("number 10 times is %d\n",s);
// }
// void tem_times(int* a){
//     printf("enter value for call by value:");
//     scanf("%d",a);
//     int s=(*a)*10;
//     printf("number 10 times is %d\n",s);
// }
int ten_time(int a){
    // return *a=(*a)*10;
    return a*10;
}
int main(){
    system("cls");
    int x;
    printf("Enter: ");
    scanf("%d", &x);
    printf("The value of x %d\n",x);
    ten_time(x);
    printf("%d",x);
    // tem_times(&x);
    // printf("After call by value x is %d\n",x);
    
    return 0;
}