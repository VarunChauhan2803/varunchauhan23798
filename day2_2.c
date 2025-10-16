#include<stdio.h>
int main(){
    int r ;
    printf("enter radius: ");
    scanf("%d",&r);
    float a = 3.14*r*r;
    printf("The Area Of Circle is : %f",a);
    float c=2*3.14*r;
    printf("the circumference of circle is %d",c);
    return 0;
}