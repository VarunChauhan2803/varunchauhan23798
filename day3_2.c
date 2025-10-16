#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter first number :");
    scanf("%d",&a);
       printf("enter second number :");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;
    printf("the first number after swapping is %d",a);
     printf("the second number after swapping is %d",b);
     return 0;

}