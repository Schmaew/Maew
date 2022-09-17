#include <stdio.h>
int x,y,n;
int factorial(int x){//printf("%d",x);
    if(x>=0){ 
    for(y=x-1;y>=1;y--){
        x=x*y;
    }
    }
return x;
}

int main(){
    scanf("%d",&x);
    x = factorial(x);
    printf("%d",x);
    return 0;
}