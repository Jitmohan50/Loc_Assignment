#include<stdio.h>
void main(){
float x;
  printf("Enter the radius of the Circle:");
  scanf("%f",&x);
  float rad = 2*x;
  printf("Diameter of the Circle is = %f\n",rad);
  float cmf = 2*3.1415*x;
  printf("Circumference of the Circle is = %f\n",cmf);
  float area = 3.1415*(x*x);
  printf("Area of the Circle is = %f\n",area);
  
}