#include <stdio.h>c
int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    int numerator = 2;
    int denominator = 3;

    for (i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;

        numerator += 2;     
        denominator += 4;   
    }
    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}