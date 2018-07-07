#include <stdio.h>

void main(){
	int g,m,x;
	printf("使用两重循环打印\n");
	for(g=0;g<=20;g++){
		for(m=0;m<=33;m++){
			x = 100-g-m;
			if(7*g+4*m==100){
				printf("公鸡=%d\n母鸡=%d\n小鸡=%d\n",g,m,x);
			}
		}
	}
	printf("\n");
} 
