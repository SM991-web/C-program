#include <stdio.h>
#include <stdlib.h>

float average(int,int,int);
float average(int a,int b,int c){
    float x = (a+b+c)/3.0;
    return x;

}

int main(){
    system("cls");
    int a,b,c;
    printf("Enter value for a:");
    scanf("%d",&a);
    printf("Enter value for b:");
    scanf("%d",&b);
    printf("Enter value for c:");
    scanf("%d",&c);
    printf("Average of %d,%d,%d is: %.2f\n",a,b,c,average(a,b,c));
    system("pause");
    return 0;
}