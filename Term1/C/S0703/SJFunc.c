#include <stdio.h>
#define N 10

main(){
	Func1();
	Func2(); 
}

//二维数组实现十阶三角矩阵 
void Func1(){
	int i,j,Fib[10][10];
	for(i = 0;i<N;i++){
		for(j = 1;j<=N;j++){ 
  			if(j>i || i==0){
				Fib[i][j] = j-i;
  			}else{ 
					Fib[i][j]= 0;
			 }
		}
	}
	for(i = 0;i<N;i++){
		for(j = 1;j<=N;j++){ 
			printf("%4d",Fib[i][j]);
		}
		printf("\n");
	}
}

//普通方法实现十阶三角举矩阵 
void Func2(){
	int i,j;
	for(i = 0;i<N;i++){
		for(j = 1;j<=N;j++){ 
			  if(j>i || i==0){
 				 printf("%4d",j-i);
			} else{
				printf("%4d",0);
			}
		}
		printf("\n");
	}
}
