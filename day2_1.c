#include<stdio.h>
int main (){
    int a;
    int l;
    int b;
    int p;
    printf("enter value of length :");
    scanf("%d",&l);
    printf("enter value of breadth");
    scanf("%d",&b);
    a=l*b;
    printf("the area of rectangle is %d",a);
    p=2*(l+b);
    printf("the perimeter of rectangle is %d",p);
    return 0;
}