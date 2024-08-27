#include <stdio.h>

int main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);
    printf("The character is: %c\n", ch);
    printf("The character value is: %d\n", ch);
    if (ch >= 97 && ch <= 122)
    {
        printf("This is lowercase\n");
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("is a number\n");
    }
    else
    {
        printf("is uppercase\n");
    }
    return 0;
}
