
#include <stdio.h>

main()
{
	//��ȡ�����������Լ������С������
	int Num1, Num2; 
	printf("������������0��Ȼ����ʹ�ÿո�ָ�:\n");
	scanf("%d%d", &Num1, &Num2);
	printf("Num1=%d,Num2=%d,\n", Num1, Num2);
	fun(Num1,Num2); 
}

void fun(int a,int b)
{
    int temp,r;
    int v;
    
    if(a<b)
    {temp=a; a=b; b=temp;}    //����������a��,С������b
    v=a*b;
    r=a%b;
    while(r!=0)
    {
        a=b;
        b=r;
        r=a%b;
    }
    v=v/b;
    printf("���Լ��Ϊ%d\n",b);
    printf("��С������Ϊ%d\n",v);
}
