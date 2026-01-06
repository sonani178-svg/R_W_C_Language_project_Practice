#include <stdio.h>
int main(){
int a = 45; 
int b = 10;
int c = 90;
if(a>b & a>c)
{
    printf("a is largest number");

}
else if (b>a & b>c)
{
    printf("b is largest number");

}
else
{
    printf("c is largest number");
}
    return 0;
}