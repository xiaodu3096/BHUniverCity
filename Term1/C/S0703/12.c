#include <stdio.h>

int gcd(int m,int n){
	while(m!=n){
		if(m>n){
			m-=n;
		}else{
			n-=m;
		}
		
	}
	return m;
}
int gcp(int m,int n){
	return m*n / gcd(m,n);
}

void main(){
	int a,b, maxgcd,mingcp;
	scanf("%d%d",&a,&b);
	maxgcd = gcd(a,b);
	mingcp = gcp(a,b);
	printf("a=%d,b=%d,最大公约数=%d,最小公倍数=%d\n",a,b,maxgcd,mingcp);
}
