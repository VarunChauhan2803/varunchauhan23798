 #include<stdio.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7}; 
    int max=arr[0];
     int smax=arr[0];  
     for(int i=0;i<=6;i++){
        if(max<arr[i]){
            smax=max;
            smax=arr[i];
        
        }
        else if(smax<arr[i]){
            smax=arr[i];
        }
        printf("%d",smax);
        
     }
     return 0;
    }