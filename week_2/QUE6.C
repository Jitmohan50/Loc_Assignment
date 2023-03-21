#include <stdio.h>
void main() {
    printf("Enter the size of Array : ");
    int size;
    scanf("%d", &size);
    int arr[size];
    printf("Input Elements in array : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    int repeat; int repeat1 = 0;
    int num = 0; int element;
    for(int i = 0; i < size; i++){
        repeat = 0;
        int target = arr[i];
        for(int j = 0; j < size; j++){
            if(target == arr[j]){
                repeat++;
            }
        }
        if(num < repeat){
            num = repeat;
            element = target;
        }else if(num == repeat && element != target){
          repeat1++;
        }
    }
  if(repeat1 == 0){
    printf("Maximum occuring integer in your array is %d.",element);
  }else{
    printf("There is more than one maximum occuring integers in array.");
  }
}
