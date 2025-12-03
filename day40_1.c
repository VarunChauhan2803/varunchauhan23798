#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = 3;

    
    for (int k = 0; k < n; k++) {
        int i = k, j = 0;
        while (i >= 0 && j < n) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
    }


    for (int k = 1; k < n; k++) {
        int i = n - 1, j = k;
        while (i >= 0 && j < n) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
    }

    return 0;
}