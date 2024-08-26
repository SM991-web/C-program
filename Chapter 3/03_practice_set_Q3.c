#include <stdio.h>

int main(){
    float Income;
    printf("Your Annual Income :\n");
    scanf("%f",&Income);
    if (Income<250000.00)
    {
        printf("Your are not in the slab of paying Income Tax\n");
        printf("Thanks For your Support\n");
    }
    else if (Income>250000.00 && Income<500000)
    {
        printf("Your are in slot of Income tax\n");
        printf("You need to pay Income Tax amount (INR):%.2f\n",(Income-250000)*0.05);
        printf("Thanks For your Support\n");
    }
    else if (Income>500000.00 && Income<1000000)
    {
        printf("Your are in slot of Income tax\n");
        printf("You need to pay Income Tax amount (INR):%.2f\n",(Income-500000)*0.20);
        printf("Thanks For your Support\n");
    }
    else if (Income>1000000)
    {
        printf("Your are in slot of Income tax\n");
        printf("You need to pay Income Tax amount (INR):%.2f\n",(Income-1000000)*0.30);
        printf("Thanks For your Support\n");
    }
    return 0;

}