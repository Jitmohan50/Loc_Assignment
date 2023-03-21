#include <stdio.h>
void main()
{
  
printf("Enter size of firstst Array: ");
  int a;
scanf("%d", &a);
printf("Enter size of second Array: ");
  int b;
scanf("%d", &b);
int Arr1[a];
int Arr2[b];
// input
 printf("enter the elements of array1:");
for(int x = 0; x < a; x++){
    scanf("%d", &Arr1[x]);
  }
printf("enter the elements of array2:");
for(int x = 0; x < b; x++){
    scanf("%d", &Arr2[x]);
  }

int size = a+b;
int newArr[size];
for(int x = 0; x < size; x++){
  if(x < a){
    newArr[x] = Arr1[x];
  }
  else{
    newArr[x] = Arr2[x-a];
    }
  }

for(int x = size-1; x >= 0; x--){
    printf("%d\t", newArr[x]);
}
    

}