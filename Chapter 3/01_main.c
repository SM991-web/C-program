#include <stdio.h>

int main()
{
    int age = 5;
    if (age > 10)
    {
        printf("Your age is greater than 10");
    }
    //if condition when executing conditional statements
    else if (age == 5)
    {
        printf("Your age is exactly equal to %d",age); 
    }
    //else if statement is executed if  'if condition is not executed '
    else
    {
        printf("your age is less than 10");
    }
    // else statement is executed if both the condition is not executed
    return 0;
}