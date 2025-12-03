#include <stdio.h>
int main() {
    char str[40];
    int i, length = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);  
    while (str[length] != '\0') {
        length++;
    }
    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}