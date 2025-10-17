#include <stdio.h>

int main() {
    int arr[100], n, i;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > 0)
            positiveCount++;
        else if (arr[i] < 0)
            negativeCount++;
        else
            zeroCount++;
    }
    printf("Positive elements = %d\n", positiveCount);
    printf("Negative elements = %d\n", negativeCount);
    printf("Zero elements     = %d\n", zeroCount);

    return 0;
}