
#include <stdio.h>

main()
{
	//获取两个数的最大公约数和最小公倍数
	int Num1, Num2; 
	printf("请输入两个非0自然数，使用空格分隔:\n");
	scanf("%d%d", &Num1, &Num2);
	printf("Num1=%d,Num2=%d,\n", Num1, Num2);
	fun(Num1,Num2); 
}

void fun(int a,int b)
{
    int temp,r;
    int v;
    
    if(a<b)
    {temp=a; a=b; b=temp;}    //将大数放在a中,小数放在b
    v=a*b;
    r=a%b;
    while(r!=0)
    {
        a=b;
        b=r;
        r=a%b;
    }
    v=v/b;
    printf("最大公约数为%d\n",b);
    printf("最小公倍数为%d\n",v);
}
