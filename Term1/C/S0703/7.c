#include <stdio.h>


void main(){
	int i,year,month,day,sumdays;
	scanf("%d%d%d",&year,&month,&day);
	sumdays = day;
	for(i=0;i<month;i++){
		switch(i){
			case 2:
				if(year%4==0&&year%100==0||year%400==0){
					sumdays+=29;
				}else{
					sumdays+=28;
				}
			case 4:
			case 6:
			case 9:
			case 11:
				sumdays+=30;
				break;
			default:
				sumdays+=31;
				break;
		}
	}
	printf("year=%d,month=%d,day=%d,sumdays=%d",year,month,day,sumdays);
}
