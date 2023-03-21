#include <stdio.h>
#include <ctype.h>
void main() {
    printf("Enter size of your string : ");
    int size;
    scanf("%d",&size);
    char str[size];
    int alpha, digits, spec;

    alpha = digits = spec = 0;

    printf("Enter a string: ");
    scanf("%s",str);

    for(int i = 0; i < sizeof(str); i++) {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alpha++;
        }
        else if(str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        else {
            spec++;
        }
    }

    printf("Total Alphabets: %d\n", alpha);
    printf("Total Digits: %d\n", digits);
    printf("Total Special Characters: %d\n", spec);
}