#include <stdio.h>

int add(int a, int b) {
    return (a + b);
}

int add_1(int *a, int *b) {
    return (*a + *b);
}

int main() {
    int x, y;

    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);

    
    printf("\nBefore calling add and add_1:\n");
    printf("x = %d, y = %d\n", x, y);

    
    int sum_value = add(x, y);
    printf("\nAfter calling add (call-by-value):\n");
    printf("Sum using call-by-value: %d\n", sum_value);
    printf("x = %d, y = %d\n", x, y);  

    
    int sum_reference = add_1(&x, &y);
    printf("\nAfter calling add_1 (call-by-reference):\n");
    printf("Sum using call-by-reference: %d\n", sum_reference);
    printf("x = %d, y = %d\n", x, y);  

    return 0;
}
