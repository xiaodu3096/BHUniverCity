#include <stdio.h>
#include <math.h> 


main(){
	func();
}

int func(){
	int DM,ZM,XM;
	for(DM = 0;DM<=66;DM++){
		for(ZM = 0;ZM<=100;ZM++){
		    XM = 100 - DM - ZM; 
			if(5*DM+3*ZM==300){
				printf("����%d,����%d,С��:%d,\n",DM,ZM,XM); 
			}
		}
	}
}
