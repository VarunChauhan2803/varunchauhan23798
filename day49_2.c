#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter full name: ");
    scanf("%[^\n]", str); 
    if (str[0] != ' ')
        printf("%c", str[0]);
    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
            int j = i + 1;
            while (str[j] != ' ' && str[j] != '\0') j++;
            if (str[j] == '\0') {
                printf(" ");
                for (j = i + 1; str[j] != '\0'; j++) {
                    printf("%c", str[j]);
                }
                break;
            } else {
                printf("%c", str[i+1]);
            }
        }
        i++;
    }
    printf("\n");
    return 0;
}