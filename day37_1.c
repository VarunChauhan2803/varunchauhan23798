#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int Sumofrow[3];

    for (int i = 0; i < 3; i++) {
        Sumofrow[i] = 0;
        for (int j = 0; j < 3; j++) {
            Sumofrow[i] += matrix[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("Sum of row %d = %d\n", i + 1, Sumofrow[i]);
    }

    return 0;
}