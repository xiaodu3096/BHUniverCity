#include <stdio.h>

void main(){
	int num,down,a,b,c;
	printf("请随意输入一个三位数字:");
	scanf("%d",&num);
	a = num%10;
	b = num/10%10;
	c = num/100;
	down = 100*a+b*10+c;
	printf("%d->%d\n",num,down); 
}
