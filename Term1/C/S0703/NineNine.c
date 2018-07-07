#include <stdio.h>
#define N 9

main(){
	Func1();
	Func2(); 
}

//九九 乘法表 二维数组实现  
void Func1(){
	int i,j;
	int Fib[10][10];
	for(i=1;i<=N;i++){
		for(j=1;j<=i;j++){
			Fib[i][j] = j*i;
		}
	}
	for(i=1;i<=N;i++){
		for(j=1;j<=i;j++){
			printf("%5ld",Fib[i][j]);
		}
		printf("\n");
	}
	
	printf("九九 乘法表 二维数组实现");
		printf("\n");
}

//普通方法实现九九乘法表 
void Func2(){
	int i,j;
	for(i=1;i<=N;i++){
		for(j=1;j<=i;j++){
			printf("%5ld",i*j);
		}
		printf("\n");
	}
	printf("普通方法实现九九乘法表 "); 
} 
