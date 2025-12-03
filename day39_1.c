#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int diag[3];
    int n = 3;
    int i, j, unique = 1;

    for (i = 0; i < n; i++) {
        diag[i] = matrix[i][i];
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (diag[i] == diag[j]) {
                unique = 0;
                break;
            }
        }
    }

    if (unique)
        printf("Diagonal elements are distinct\n");
    else
        printf("Diagonal elements are not distinct\n");

    return 0;
}