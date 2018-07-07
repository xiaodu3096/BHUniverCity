#include <stdio.h>

void main(){
	float score;
	scanf("%f",&score);
	printf("score=%.1f\n",score);
	switch((int)(score/10)){
		case 10:
		case 9:
			printf("A\n");
			break;
		case 8:
			printf("B\n");
			break;
		case 7:
			printf("C\n");
			break;
		case 6:
			printf("D\n");
			break;
		default:
			printf("E");
	}
}
