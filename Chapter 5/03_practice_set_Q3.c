#include <stdio.h>
#include <stdlib.h>

float force(float);

float force(float m){
    float g = 9.8;
    float force = m*g;
    return force;
}

int main(){
    system("cls");
    float m;
    printf("Mass exerted by earth:");
    scanf("%f",&m);
    printf("Force = %.2f \n",force(m));
    system("pause");
    return 0;

}