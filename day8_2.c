#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter first number :");
    scanf("%d", &a);
    printf("enter second number :");
    scanf("%d",&b);
    printf("enter third number :");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is greatest of all",a);
    } else if(b>a && b>c){
        printf("%d is greatest of all",b);
    } else if (c>b && c>a){
        printf("%d is greatest of all",c);
    }
    return 0;
}