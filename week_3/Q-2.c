#include <stdio.h>
#include <string.h>

void countFrequency(char *str) {
    int freq[200] = {0};

    int length = strlen(str);
  
    for (int i = 0; i < length-1; i++) {
        freq[str[i]]++;
    }

    printf("Frequency of characters\n");
    for (int i = 0; i < 200; i++) {
        if (freq[i] != 0) {
            printf("%c = %d\n",i, freq[i]);
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);
    countFrequency(str);
    return 0;
}