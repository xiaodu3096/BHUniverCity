#include <stdio.h>


void main(){
	float a,b,c,area,t;
	printf("�����������������֣�");
	scanf("%f%f%f,",&a,&b,&c);
	printf("a=%.2f,b=%.2f,c=%.2f",a,b,c); 
	if(a+b>c&&a+c>b&&b+c>a){
		t = (a+b+c)/2.0;
		area = sqrt(t*(t-a)*(t-b)*(t-c));
		printf("\n");
		printf("���Ϊ:%.4f",area);
		printf("\n");
		if(a==b&&a==c){
			printf("�ȱ�������");
		} else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
			printf("ֱ��������"); 
		}else if(a==b||a==c||b==c){
			printf("����������");
		}else{
			printf("����������");
		}
	}else{
		printf("���ܹ���������");
	}
}
