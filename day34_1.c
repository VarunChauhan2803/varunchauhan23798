#include <stdio.h>

int main() {
    int arr[100] = {1, 2, 3, 5, 6};
    int n = 5; 
    int pos = 3; 
    int value = 4;
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    n++; 

    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}