#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if(x%9!=0)printf("%d", x%9);
    else printf("%d", 9);
    return 0;
}