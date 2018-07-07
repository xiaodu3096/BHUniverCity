#include <stdio.h>

void main(){
	char ch;
	for(ch='A';ch<='Z';ch++){
		printf("%c",ch);
	}
	printf("\n");
	for(ch='Z';ch>='A';ch--){
		printf("%c",ch);
	}
	printf("\n"); 
}
