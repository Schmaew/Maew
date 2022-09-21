#include <stdio.h>
int ans,num;
float realans,ans1;

int main(){
    scanf("%d\n",&num);
    if(num>=0){
        num=num*10000;
        for(ans=100;ans<=num/100;ans++){
            if(ans*ans==num) {
                printf("%d\n",ans/100); break;
            }
            else if(ans*ans>=num){
                ans1=ans-1;
                realans=ans1/100;           
                printf("%.2f\n",realans);
                break;
            }

        }
            
    }
    else{
        printf("Error!");
    }
    return 0;
}
//must input x 2 round and x<=10000