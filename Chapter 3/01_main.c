#include <stdio.h>

int main()
{
    int age = 5;
    if (age > 10)
    {
        printf("Your age is greater than 10");
    }
    else if (age == 5)
    {
        printf("Your age is exactly equal to %d",age); 
    }

    else
    {
        printf("your age is less than 10");
    }
    return 0;
}