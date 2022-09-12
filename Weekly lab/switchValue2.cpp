#include <stdio.h>

int main(){
	float x,y;
	scanf("%f %f",&x,&y);
	x = x*y;
	y = x/y;
	x = x/y;
	printf("%.10f %.10f",x,y);
}
