#include <stdio.h>
#include <math.h>

main(){
	float x,y;
	scanf("%f",&x);
	if(x<=0){
		y = sin(x);
	}else if(x<=10){
		y=sqrt(x*x+1);
	}else{
		y=exp(x);
	}
	printf("x=%.3f,y=%.3f",x,y); 
}
