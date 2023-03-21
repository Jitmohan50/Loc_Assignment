#include<stdio.h>
void main(){
    float x = 0, y = 0;
    printf("Type first number:");
    scanf("%f",&x);
    printf("Type second number:");
    scanf("%f",&y);
  float sum = x+y;
  float div = x/y;
  float sub = x-y;
  float mul = x*y;
  printf("For summation type (1)\n");
  printf("For substraction type (2)\n");
  printf("For multiplication type (3)\n");
  printf("For division type (4)\n");
  
  printf("What operation do you want:");
  int op;
  scanf("%d",&op);
  
  switch(op){
  case 1:
  printf("The sum of these two numbers is %f",sum);
  break;
    case 2:
    printf("The substraction of the two number is %f",sub);
    break;
    case 3:
    printf("The multiplication of these two number is %f",mul);
    break;
    case 4:
    printf("The division of these two number is %f",div);
    break;
    }
}