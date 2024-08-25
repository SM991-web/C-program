#include <stdio.h>

int main(){
    int marks;
    printf("Enter Marks of the student:");
    scanf("%d",&marks);
    if (marks>=90 && marks<=100)
    {
        printf("Your Grade Is 'A'\n");
    }
    else if (marks>=80 && marks<=90)
    {
        printf("Your Grade Is 'B'\n");
    }
    else if (marks>=70 && marks<=80)
    {
        printf("Your Grade Is 'C'\n");
    }
    else if (marks>=60 && marks<=70)
    {
        printf("Your Grade Is 'D'\n");
    }
    else if (marks>=50 && marks<=60)
    {
        printf("Your Grade Is 'E'\n");
    }
    else if (marks<=50)
    {
        printf("Your Grade Is 'F'\n");
    }
    return 0;

}