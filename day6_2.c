#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    if(n>0){
        printf("positive number");
    }else if(n<0){
        printf("negative  number");
    }else{
        printf("the number is zero");
    }
return 0;
    
}