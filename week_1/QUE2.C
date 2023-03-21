#include <stdio.h>
void main(){
    int x = 0;
    printf("Type your number-");
    scanf("%d",&x);
    if(x<0){
    printf("your number is negative");
    }
    else if(x>0){
        printf("your number is positive");
    }
    else{
        printf("Zero");
    }
}