#include <stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter number for a:");
    scanf("%d",&a);
    printf("Enter number for b:");
    scanf("%d",&b);
    printf("Enter number for c:");
    scanf("%d",&c);
    printf("Enter number for d:");
    scanf("%d",&d);
    if (a>b && a>c && a>d)
    {
        printf("%d is greater of all four number",a);
    }
    if (b>a && b>c && b>d)
    {
        printf("%d is greater of all four number",b);
    }
    else if (c>b && c>a && c>d)
    {
        printf("%d is greater of all four number",c);
    }
    else if (d>b && d>c && d>a)
    {
        printf("%d is greater of all four number",d);
    }
    return 0;

}