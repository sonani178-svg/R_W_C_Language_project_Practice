#include <stdio.h>
int main() {

    float princpal, rate, time, SI;
 printf("enter the p, r, t :");
    scanf("%f %f %f", &princpal, &rate, &time);

    SI= (princpal * rate * time) / 100;    
    
    printf("SI= %.2f" , SI);

    return 0;
}