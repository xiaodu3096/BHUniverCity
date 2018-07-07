#include <stdio.h>

float temp(float c){
	return (9.0/5.0*c+32);
}
void main(){
	float c;
	scanf("%f",&c);
	printf("C=%.2f,F=%.2f\n",c,temp(c));
}

