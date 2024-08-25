#include <stdio.h>

int main(){
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        printf("You enter 1\n");
        break;
        case 2:
        printf("You enter 2\n");
        break;
        case 3:
        printf("You enter 3\n");
        break;
        case 4:
        printf("You enter 4\n");
        break;
        default:
        printf("Nothing Matched");
    }
    return 0;

}