#include <stdio.h>
int main() {
    int num, digit, frequency[10] = {0}, i;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    while (num != 0) {
        digit = num % 10;
        frequency[digit]++;
        num /= 10;
    }
    int maxFrequency = frequency[0], maxDigit = 0;
    for (i = 1; i < 10; i++) {
        if (frequency[i] > maxFrequency) {
            maxFrequency = frequency[i]; 
            maxDigit = i;
        }
    }
    printf("Digit that occurs most = %d (appears %d times)\n", maxDigit, maxFrequency);

    return 0;
}