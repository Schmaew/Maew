#include<stdio.h>

int main(){
    long long int i=1,x,y,sum=0;
    printf("enter num");
    scanf("%lld",&x);
    while(i<=x){
        //printf("*");
        if(x>=1){
            y=x%10;
            sum=sum+y;
            x/=10;
        }
        if(sum>=10){
            y=sum%10;
            sum/=10;
            sum=sum+y;
        }
    }
    printf("%d",sum);
    return 0;
}