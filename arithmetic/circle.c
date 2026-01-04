#include <stdio.h>
int main(){
  float area;
  float PI = 3.142;
  float R = 5;
  
  scanf("%f%f", &area ,&PI, &R);
  printf("area of circle = %f", PI * R * R);
    
    return 0;
}