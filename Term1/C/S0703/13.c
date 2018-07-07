#include <stdio.h>
#include <math.h>

void main(){
	float x,y;
	scanf("%f",&x);
	if(x<=0){
		y=x*x+x+1;
	}else if(x<10){
		y = cos(x);
	}else{
		y = sqrt(x)+1;
	}
	printf("x=%.2f,y=%.2f\n",x,y);
}
 
