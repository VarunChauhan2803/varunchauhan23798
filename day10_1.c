#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter first side :");
    scanf("%d", &a);
    printf("enter second side :");
    scanf("%d",&b);
    printf("enter third side :");
    scanf("%d",&c);
    if(a=b=c){
        printf("it is an equilateral triangle");
    }else if(a==b || b==c || c==a){
        printf("it is an isoceles triangle");
    }else if(a!=b || b!=c  || c!=a){
            printf("it is an scalene triangle");;
        }


    return 0;
}