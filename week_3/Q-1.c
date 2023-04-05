#include <stdio.h>
#include <string.h>

void removeChar(char *str, char c){
    int x = 1;
    int length = strlen(str);
    for (int i = 1; i < length; i++) {
        if (str[i] != c) {
            str[x++] = str[i];
        }
    }
    str[x] = '\0';
}

int main() {
    char str[100];
    char c;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to remove:");
    scanf("%c", &c);
    removeChar(str, c);
    printf("String after removing '%c': %s", c, str);
    return 0;
}
