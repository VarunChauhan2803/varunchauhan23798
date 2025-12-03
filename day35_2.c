#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5, k = 2;
    int rotated[5];

    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }

    return 0;
}