#include <stdio.h>

int main() {
     long binary, digit, result = 0, place = 1;
    printf("Enter a binary number (only 0s and 1s): ");
    scanf("%ld", &binary);
    while (binary != 0) {
        digit = binary % 10;
        if (digit == 0)
            result += 1 * place;
        else if (digit == 1)
            result += 0 * place;
        else {
            printf("Invalid binary digit detected.\n");
            return 1;
        }
        binary /= 10;
        place *= 10;
    }
    printf("1's complement = %ld\n", result);
    return 0;
}