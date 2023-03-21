#include<stdio.h>
void main(){
int x = 0;
printf("Enter a number:");
scanf("%d",&x);
int sum = 0;
int rem = 0;
do{
  rem = x%10;
  sum = sum + rem;
  x = x/10;
}
  while(x>0);
printf("Sum of the digits of the number is %d",sum);
  }