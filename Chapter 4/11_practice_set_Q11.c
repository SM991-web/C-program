#include <stdio.h>

int main() {
    int p = 0, n;
    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n / 2; i++) {
        if (n <= 1) {  
            printf("%d is not prime", n);
            return 0;  
        }
        if (n % i == 0) {
            p = 1; 
            printf("%d is not prime", n);    
            break;     
        }
    }

    if (p == 1) {
        printf("%d is not prime", n);
    } 
    else {
        printf("%d is prime", n);
    }

    return 0;
}
