#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = 0; i < rows; i++) {
        for (int space = 0; space < i; space++) {
            printf(" ");
        }
        for (int star = 0; star < rows - i; star++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}