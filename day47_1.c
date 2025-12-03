#include <stdio.h>
#include <string.h>
int main() {
    char str1[50], str2[50];
    int i, j, len1, len2, flag = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2) {
        printf("Not anagrams.\n");
        return 0;
    }

    for (i = 0; i < len1 - 1; i++) {
        for (j = i + 1; j < len1; j++) {
            if (str1[i] > str1[j]) {
                char temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }

    for (i = 0; i < len2 - 1; i++) {
        for (j = i + 1; j < len2; j++) {
            if (str2[i] > str2[j]) {
                char temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }
    for (i = 0; i < len1; i++) {
        if (str1[i] != str2[i]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("The strings are anagrams.\n");
    else
        printf("Not anagrams.\n");

    return 0;
}