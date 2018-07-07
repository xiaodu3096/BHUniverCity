#include <stdio.h>
#include <string.h>
#include <math.h> 


int main(){  
  
    char GetInputStr[100]; 
	char chars;
    int count = 0;
    printf("请输入字符串的内容:\n");
	do{
 		scanf("%c",&GetInputStr[count]);
        chars=GetInputStr[count];
        count++;
	}while(chars!='\n');
	printf("转换后字符串的内容为:\n");
	count = 0;
	while(GetInputStr[count]!='\0'){
		chars=GetInputStr[count];
		if(chars>='a' && chars<='z'){
			GetInputStr[count]-=32;
		}else if(chars>='A' && chars<='Z'){
			GetInputStr[count]+=32;
		}
		printf("%c",GetInputStr[count]);
		count++;
	}
	printf("\n"); 
   return 0;
}


