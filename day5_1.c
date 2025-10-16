#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, CI;

    // Input values
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    printf("Enter annual interest rate (in %%): ");
    scanf("%f", &rate);

    // Compound Interest formula: CI = P * ( (1 + R/100)^T )
    CI = principal * pow((1 + rate / 100), time);

    // Output result
    printf("Compound Interest = %.2f\n", CI);

    return 0;
}

