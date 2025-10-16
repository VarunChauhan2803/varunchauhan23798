#include<stdio.h>
int main(){
    int totalseconds, hours, minutes, seconds;
    scanf("%d",&totalseconds);
hours=totalseconds/3600;
minutes=totalseconds/60;
seconds=totalseconds%60;
printf("time in HH:MM:SS format is %d:%d:%d",hours,minutes,seconds);
return 0;
}