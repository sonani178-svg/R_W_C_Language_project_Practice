#include <stdio.h>
int main(){
    int a; 
    int b; 
 
    // using swap airthmetic operator

    printf("emter value of a :");
    scanf("%d", &a);

    printf("enter value of b :");
    scanf("%d", &b);
    
    // swaping without third variable

    a= a+b;
    b= a-b;
    a= a-b;

    printf("swap num : \n");
    printf("a= %d\n", a);
    printf("b= %d\n", b);


    return 0;
}