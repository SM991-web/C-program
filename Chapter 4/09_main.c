#include <stdio.h>

int main(){
    for (int i = 0; i < 10; i++)
    {
        if(i==5)
        {
            // break; terminate the code at that point only
            continue;//skip the iteration
        }
        printf("%d\n",i);
        
        
    }
    
    return 0;

}