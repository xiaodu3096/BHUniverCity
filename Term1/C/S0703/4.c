#include <stdio.h>

void main(){
	char ch;
	int a=0,e=0,i=0,o=0,u=0;
	printf("请输入一串字符,换行作为结束：");
	while((ch=getchar())!='\n'){
		switch(ch){
			case 'a':
			case 'A':
				a++;
				break;
			case 'e':
			case 'E':
				e++;
				break;
			case 'i':
			case 'I':
				i++;
				break;
			case 'o':
			case 'O':
				o++;
				break;
			case 'u':
			case 'U':
				u++;
		} 
	}
	printf("a,A=%d\ne,E=%d\ni,I=%d\no,O=%d\nu,U=%d",a,e,i,o,u); 
}
