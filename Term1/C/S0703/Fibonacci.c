#include <stdio.h>
#define N 20


//方法1 使用递归实现 
int Func(int Num){
	if(Num==1 || Num ==2){
		return 1;
	}
	else{
 		return Func(Num-1)+Func(Num-2);
	}
}
	
void main(){ 
	int i = 0;
	for(i = 1;i<=20;i++){
		printf("%12ld",Func(i));
		if(i%5==0){
			printf("\n");
		}
	} 
	printf("\n");
	printf("\n");
	printf("\n");
	Func2(); 
}

//方法2 使用数组实现 
void Func2(){
	int i; 
	long Fib[N]= {1,1};
	for(i = 2;i<N;i++){
		Fib[i]= Fib[i-1]+Fib[i-2];
	}
	for(i=0;i<N;i++){
		printf("%12ld",Fib[i]);
		if((i+1)%5==0){
			printf("\n");
		}
	}
}
