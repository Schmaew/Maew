#include <stdio.h>

int i,x;
int factorial(int n){ 
    int sum=1;
    if(n==0){
        //printf("1");
    }
    else{
        for(int i=1;i<=n;i++){
            sum=sum*i;
        }
        //printf("%d",sum);
    }
    return sum;
}

int main(){
    scanf("%d",&x);
    x = factorial(x);
    printf("%d",x);
    return 0;
}