#include <stdio.h>
#define N 9

main(){
	Func1();
	Func2(); 
}

//�ž� �˷��� ��ά����ʵ��  
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
	
	printf("�ž� �˷��� ��ά����ʵ��");
		printf("\n");
}

//��ͨ����ʵ�־žų˷��� 
void Func2(){
	int i,j;
	for(i=1;i<=N;i++){
		for(j=1;j<=i;j++){
			printf("%5ld",i*j);
		}
		printf("\n");
	}
	printf("��ͨ����ʵ�־žų˷��� "); 
} 
