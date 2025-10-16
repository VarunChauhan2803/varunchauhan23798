#include<stdio.h>
int main(){
    int x;
    int y;
    printf("enter first number :\n");
    scanf("%d",x);
    printf("enter second number :\n");
    scanf("%d",y);
    int sum;
    sum = x+y;
    printf("the sum of numbers you have entered is : %d", sum);
    return 0;
}