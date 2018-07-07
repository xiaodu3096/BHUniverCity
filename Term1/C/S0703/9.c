#include <stdio.h>
#define N 10

void main(){
	func();
	func2();
}

func(){
	int i,j,yh[N];
	printf("一维数组打印\n\n");
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

func2(){
	int i,j,yh[N][N];
	printf("二维数组打印\n\n");
	for(i=0;i<N;i++){
		yh[i][0]=yh[i][i]=1;
		for(j=1;j<i;j++){
			yh[i][j]=yh[i-1][j-1]+yh[i-1][j];
		}
	}
	for(i=0;i<N;i++){
		for(j=1;j<=15-i;j++){
			printf("  ");
		}
		for(j=0;j<=i;j++){
			printf("%4d",yh[i][j]);
		}
		printf("\n");
	}
}
