
#include <stdio.h>
int main(){

int a, snum, bnum;
printf("enter the snum");
scanf("%d", &snum);

printf("enter the lnum");
scanf("%d", &bnum);

printf("enter the a num");
scanf("%d", &a);

if(a>=snum && a<=bnum){
    printf("%d lies between %d and %d\n", a, snum, bnum);
}
    else
{
    printf("%d does not lie between %d and %d", a, snum, bnum);
}
return 0;
}
