//1 to 100//
#include <stdio.h>
void main (){
int x = 1;
while(x<=100){
    if(x%3==0 && x%5==0){
        printf("FizzBuzz\n");
    }
 else if (x%3==0){
  printf("fizz\n");
 }
 else if (x%5==0){
  printf("Buzz\n");
 }

 else{
    printf("%d\n",x);
 }
x++;
}
}