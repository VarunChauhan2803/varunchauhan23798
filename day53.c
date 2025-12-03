#include <stdio.h>
int main() {
    int nums[100], n;
    int totalSum = 0, leftSum = 0, pivot = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        totalSum += nums[i];  
    }
    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum) {
            pivot = i;
            break;  
        }
        leftSum += nums[i];
    }
    printf("%d\n", pivot);
    return 0;
}

