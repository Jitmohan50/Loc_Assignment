#include <stdio.h>

void add(int *x, int *y, int *result) {
    *result = *x + *y;
}
int main(){
    int x, y, result;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);

    add(&x, &y, &result);
    printf("Sum of %d and %d is equal to %d.\n", x, y, result);
    return 0;
}