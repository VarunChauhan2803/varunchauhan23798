#include <stdio.h>
#include <math.h>

int main() {
    int num, original, first, last, digits = 0, power, middle, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    last = num % 10;

   
    while (num != 0) {
        first = num % 10;
        num /= 10;
        digits++;
    }

    
    if (digits == 1) {
        printf("Swapped number = %d\n", original);
        return 0;
    }

    power = pow(10, digits - 1);
    middle = (original % power) / 10;  

    
    swapped = last * power + middle * 10 + first;

    printf("Swapped number = %d\n", swapped);

    return 0;
}