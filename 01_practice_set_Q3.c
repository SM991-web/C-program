#include <stdio.h>

int main() {
    float c, f;
    printf("Enter the value in Celsius: ");
    scanf("%f", &c);
    
    f = (9/5)*c+32;
    printf("The Temperature in Fahrenheit: %f", f);
    
    return 0;
}
