#include<stdio.h>
int main(){
    float c;
    printf("enter the temprature in celcius:");
    scanf("%f",&c);
    float f;
    scanf("%f",&f);
    
    f=(c*9/5)+32;
    printf("the temperature in farenheit is %f ",f);
    return 0;
    
}