#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    return 0;
}