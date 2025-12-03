#include <stdio.h>
int main() {
    int arr[50] = {2, 4, 6, 8, 10}; 
    int n = 5;
    int element = 5;

    int i = n - 1;
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i]; 
        i--;
    }
    arr[i + 1] = element;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}