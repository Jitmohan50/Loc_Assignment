#include <stdio.h>
void swap(int *, int *); // function prototype
int main()
{
int a,b;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
printf("Before swapping \n");
printf("a = %d \n",a);
printf("b = %d \n",b);
swap(&a,&b); // function call by reference
printf("After swapping \n");
printf("a = %d \n",a);
printf("b = %d \n",b);
return 0;
}
void swap(int *x, int *y) // function definition
{
int temp;
temp = *x;
*x = *y;
*y = temp;
}