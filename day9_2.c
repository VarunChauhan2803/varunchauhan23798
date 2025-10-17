#include <stdio.h>

int main() {
    int n;
    printf("Enter your marks: ");
    scanf("%d", &n);

    if (n >= 90) {
        printf("A grade\n");
    } else if (n >=80) {
        printf("B grade\n");
    } else if (n >= 70) {
        printf("C grade\n");
    } else if (n>=60){
        printf("D grade");
    }else{
        printf("Fail\n");
    }

    return 0;
}