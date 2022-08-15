#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int n;
  printf("Enter num");
  scanf("%d",&n);
  for(int i = 0;i<n*n;i++){
    //printf("%d",i);
    if((i+1)%n == 0 && i < n*n-1) 
        printf("*\n");
    else if((i)%n == 0 || i < n || i + n >= n*n)
        printf("*");
    else 
        printf(" ");
    
  }
  return 0;
}