#include <stdio.h>

void main(){
	int g,m,x;
	printf("ʹ������ѭ����ӡ\n");
	for(g=0;g<=20;g++){
		for(m=0;m<=33;m++){
			x = 100-g-m;
			if(7*g+4*m==100){
				printf("����=%d\nĸ��=%d\nС��=%d\n",g,m,x);
			}
		}
	}
	printf("\n");
} 
