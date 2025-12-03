#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {2, 4, 5}, {3, 5, 6}};
    int symmetric = 1; 

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (symmetric == 0)
            break;
    }

    if (symmetric == 1)
        printf("Matrix is symmetric\n");
    else
        printf("Matrix is not symmetric\n");

    return 0;
}