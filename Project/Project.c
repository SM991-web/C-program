#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guess=0;
    int guessed;

    // Print the random number
    // printf("Random number between 1 and 100: %d\n", randomNumber);
    do
    {
        printf("Guess tha number:");
        scanf("%d",&guessed);
        if (guessed>randomNumber)       
        {
            printf("Hint: Lower number\n");
        }
        else if (guessed<randomNumber)
        {
            printf("Hint: Higher number\n");
        }
        no_of_guess++;
        
    } while (guessed!=randomNumber);
    
    printf("You guessed the number correctly in %d guesses  ",no_of_guess);
    return 0;
}
