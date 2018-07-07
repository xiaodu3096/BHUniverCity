#include <stdio.h>
#define N 15

main(){
	Func1();
	printf("\n");
	Func2();
}

//二维 数组实现杨辉三角  
void Func1(){
		int i,j;
	int yh[N][N];
	for(i=0;i<N;i++){
		yh[i][0]=yh[i][i]=1;
		for(j=1;j<i;j++){
			yh[i][j]=yh[i-1][j-1]+yh[i-1][j];
		}
	}
	for(i=0;i<N;i++){
		for(j=1;j<=15-i;j++){
			printf("**");
		}
		for(j=0;j<=i;j++){
			printf("%4d",yh[i][j]);
			
		}
		printf("\n"); 
	}
} 
//一维数组 实现杨辉三角 
void Func2(){
	int i,j,yh[N];
	for(i=0;i<N;i++){
		yh[i] = 1;
		for(j=i-1;j>=1;j--){
			yh[j]+=yh[j-1];
		}
		
		for(j=1;j<=15-i;j++){
			printf("  ");
		}
		for(j=0;j<=i;j++){
			printf("%4d",yh[j]);
		}
		printf("\n");
	}
	
	
}
