#include<stdio.h>
void main()
{
	double x,y;
	printf("输入变量x的值（最多输入小数点后两位），程序将输出函数y的值...\nx=");
	scanf("%lf",&x);
	if (x<1)
	{
		y=x;
		printf("y=%.2lf\n",y);
	}
	else if (x>=1&&x<10)
	{
		y=x*2-1;
		printf("y=%.2lf\n",y);
	}
	else if (x>=10)
	{
		y=x*3-11;
		printf("y=%.2lf\n",y);
	}
	else
	{
		printf("该信息无法被输出！！！");
	}
}
