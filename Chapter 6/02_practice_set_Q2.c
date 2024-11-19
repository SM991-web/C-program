#include <stdio.h>
#include <stdlib.h>
#include <string.h>  

void return_3(int* a) {
    printf("Address of x is %p\n", (void*)&a);
    printf("Value of x through pointer y is %d\n", *a);
    printf("Address stored in y is %p\n", (void*)a);
}

int main() {
    system("cls");

    int x;
    printf("Enter a value: ");
    scanf("%d", &x);
    int* y = &x;

    char choice[10];  


    do {
        return_3(y);  

        printf("Do you want to call the function again? (yes/no): ");
        scanf("%s", choice);  

    } while (strcmp(choice, "yes") == 0 || strcmp(choice, "Yes") == 0 || strcmp(choice, "YES") == 0);

    printf("Program exited.\n");
    return 0;
}
