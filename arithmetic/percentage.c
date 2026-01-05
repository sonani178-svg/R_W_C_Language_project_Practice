#include <stdio.h>
int main(){
float Guj = 46, maths = 42, Eng = 32, Hindi = 34, com = 40.5;
float percentage, total;

scanf("%f%f%f%f%f", &Guj, &maths, &Eng, &Hindi, &com);

 // total subject calculate
 total = Guj + maths + Eng + Hindi + com;
printf("percentage = %.2f%%", (total/250)*100);
    return 0;
}