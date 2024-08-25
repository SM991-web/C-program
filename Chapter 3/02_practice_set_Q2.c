#include <stdio.h>

int main() {
    int english, maths, cs;
    
    // Taking input for the marks
    printf("Enter English Marks:\n");
    scanf("%d", &english);
    
    printf("Enter Maths Marks:\n");
    scanf("%d", &maths);
    
    printf("Enter CS Marks:\n");
    scanf("%d", &cs);
    
    // Calculating the total marks
    float Total = english + maths + cs;
    
    // Checking the conditions for passing or failing
    if (english < 33 || maths < 33 || cs < 33) {
        printf("You have failed due to scoring less than 33 marks in one or more subjects.\n");
        printf("Your %%age %.2f%%",Total/3.0);

    } else if ((Total)/ 3.0 < 40) {
        printf("You have failed due to an overall percentage less than 40%%.\n");
        printf("Your %%age %.2f%%",Total/3.0);

        
    } else {
        printf("Congratulations! You have passed in all subjects.\n");
        printf("Your %%age %.2f%%",Total/3.0);

    }
    
    return 0;
}
