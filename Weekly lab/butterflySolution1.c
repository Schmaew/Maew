#include <stdio.h>

int main(){
    int n,length = 1;
    scanf("%d",&n);
    for(int i = 0;i < 2*n - 1;i++){
        if(i == n) length = 2*n - 3;
        for(int j = 0;j < 4*n - 2;j++){
            if(j%2 != 0) printf(" ");
            else if(j < length || 4*n-3 - j <= length) printf("*");
            else printf(" ");
        }
        printf("\n");
        if(i < n) length += 2;
        else length -= 2;
    }
    return 0;
}