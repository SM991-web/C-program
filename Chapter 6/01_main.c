#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int i;
    int* j = &i;
    printf("Enter number:");
    scanf("%d",&i);
    printf("The address of %d is %p\n",i,&i);
    printf("Address  = %p\n",&j);// we sometimes use %u which is unsigned integer
    // printf("Address  = %u\n",&j);
    //If 👆🏻👆🏻👆🏻👆🏻 does not work try this 👇🏻👇🏻👇🏻👇🏻
    // printf("Address  = %u",(unsigned int)j);
    printf("the value at address  j is %d\n",*(&i));
    // printf("the value address  j is %p\n",(void*)&j);
    // this is another snippet to get address of any pointer
    return 0;

}