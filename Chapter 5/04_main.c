#include <stdio.h>
#include <math.h>
// to find the power of a number
int main()
{

    float a;
    int b;
    printf("Enter number:");
    scanf("%f",&a);
    printf("Enter power value:");
    scanf("%d",&b);
    printf("The area of this square is: %.0f\n", pow(a,b));
    return 0;
}
// int area_calculation(int,int);

// int area_calculation(int x,int y){
//     printf("Area of square with length: %d and breadth: %d is\n",x,y);
//     printf("%d",(x*y))
//     return x*y;
// }

// int main(){
//     int a,b;
//     printf("Enter value for a:");
//     scanf("%d",&a);
//     printf("Enter value for b:");
//     scanf("%d",&b);
//     return 0;

// }