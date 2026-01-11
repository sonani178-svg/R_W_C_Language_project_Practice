#include <stdio.h>
int main(){
    int x, y;
    int result;

    printf("enter value of x: ");
    scanf("%d", &x);

    printf("enter value of y: ");
    scanf("%d", &y);

    result= (x*x) + (2*x*y) + (y*y);
    printf("the result of (x+y^2) %d\n:",result);
    

    return 0;
}