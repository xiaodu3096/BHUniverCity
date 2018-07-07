#include <stdio.h>


void main(){
	float a,b,c,area,t;
	printf("请随意输入三个数字：");
	scanf("%f%f%f,",&a,&b,&c);
	printf("a=%.2f,b=%.2f,c=%.2f",a,b,c); 
	if(a+b>c&&a+c>b&&b+c>a){
		t = (a+b+c)/2.0;
		area = sqrt(t*(t-a)*(t-b)*(t-c));
		printf("\n");
		printf("面积为:%.4f",area);
		printf("\n");
		if(a==b&&a==c){
			printf("等边三角形");
		} else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
			printf("直角三角形"); 
		}else if(a==b||a==c||b==c){
			printf("等腰三角形");
		}else{
			printf("任意三角形");
		}
	}else{
		printf("不能构成三角形");
	}
}
