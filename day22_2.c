#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    printf("Enter number of terms (n): ");
    scanf("%d", &n);
    int num = 1, den = 2;
    for (i = 1; i <= n; i++) {
        sum += (float)num / den;
        num += 2;
        den += 2;
    }
    printf("Sum of the series up to %d terms = %.4f\n", n, sum);
    return 0;
}