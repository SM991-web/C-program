#include <stdio.h>
#include <stdlib.h>

void ten_times(int* a){
    printf("The value of %d ten times is %d",*a,*a*10);
}

int main(){
    system("cls");
    int x;
    printf("Enter: ");
    scanf("%d", &x);

    ten_times(&x);

    return 0;
}