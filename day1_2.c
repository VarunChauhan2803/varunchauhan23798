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
    int difference;
    difference=x-y;
    printf("the difference of numbers you have entered is : %d", difference);
     int product;
    product=x*y;
    printf("the product of numbers you have entered is : %d", product);
     int quotient;
    quotient=x/y;
    printf("the quotient of numbers you have entered is : %d", quotient);

    return 0;
}