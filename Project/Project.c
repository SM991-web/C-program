#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int random_number=(rand()%100)+1;
    int guessed,no_of_guess=0;
    do
    {
        printf("Guess the number:");
        scanf("%d",&guessed);
        no_of_guess++;
        if (guessed<random_number)
        {
            printf("Hint:Higher number\n");
        }
        else if (guessed>random_number)
        {
            printf("Hint:lower number\n");
        }
        
    } while (guessed!=random_number);
    printf("You guessed the number correctly in %d guesses  ",no_of_guess);
    return 0;

}


