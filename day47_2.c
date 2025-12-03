#include <stdio.h>

int main() {
    char str[200];
    int i = 0, currLen = 0, maxLen = 0, maxStart = 0, start = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);   

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            if (currLen == 0) start = i;
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
        }
        i++;
    }

    if (currLen > maxLen) {
        maxLen = currLen;
        maxStart = start;
    }

    printf("Longest word: ");
    for (i = 0; i < maxLen; i++) {
        printf("%c", str[maxStart + i]);
    }
    printf("\n");

    return 0;
}