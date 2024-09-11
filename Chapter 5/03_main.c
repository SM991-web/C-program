#include <stdio.h>
int sum(int,int);

int sum(int x,int y){
    return x+y;
}
int change(int a);

int change(int a){
    a=77;
    return 0;
}
int main(){
    int a=3,b=5;
    int c=4;
    change(c);
    printf("%d",c);
    printf("%d",sum(a,b));
    return 0;

}