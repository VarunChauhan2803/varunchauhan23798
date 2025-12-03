#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i = 0, start = 0, end;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);   

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i+1] == '\0') {
            end = (str[i] == ' ') ? i - 1 : i;
            int s = start, e = end;
            while (s < e) {
                char temp = str[s];
                str[s] = str[e];
                str[e] = temp;
                s++;
                e--;
            }

            start = i + 1; 
        }
        i++;
    }

    printf("Reversed words: %s\n", str);

    return 0;
}