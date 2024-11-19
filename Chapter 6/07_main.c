#include <stdio.h>
#include <stdlib.h>

int swap(int *a,int *b){
    // *a=*a+*b;
    // *b=*a-*b;
    // *a=*a-*b;
    
    int temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}

int main(){
    system("cls");
    int x;
    printf("Enter: ");
    scanf("%d", &x);
    
    int y;
    printf("Enter: ");
    scanf("%d", &y);
    
    printf("Numbers before swap x=%d and y=%d\n",x,y);
    swap(&x,&y);
    printf("Numbers before swap x=%d and y=%d\n",x,y);

    return 0;
}