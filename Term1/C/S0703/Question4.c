#include <stdio.h>

int main(){
	int a[10][10],i,j;
 	for(i=1;i<=10;i++){
		for(j=1;j<=10;j++){
			if(i>=j){
				printf("%d\t",j);
			}else{
				printf("%d\t",0);
			}
		}
		printf("\n");
 	}
	
	return 0;
}
