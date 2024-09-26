#include <stdio.h>
#include <stdlib.h>

float fahrenheit(int);

float fahrenheit(int F){
    float C = 5.0/9.0*(F - 32);
    return C;
}

int main(){
    system("cls");
    int a;
    printf("Enter fahrenheit value:");
    scanf("%d",&a);
    printf("Fahrenheit(%d) to celsius is:%.2f\n",a,fahrenheit(a));
    system("pause");
    return 0;

}