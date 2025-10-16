#include<stdio.h>
int main (){
    int n;
    printf("enter value of n :");
    scanf("%d",&n);
    int sum;
    for(int i=1 ; i<=n ; i++){
        sum = sum+i;
    }

    printf("the sum of %d natural numbers is %d",n  ,sum);
    return 0;
}