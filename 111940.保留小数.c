#include<stdio.h>
void main()
{
	double x;
	printf("请输入一个小数，程序会将其精确到小数点后三位\n");
	scanf("%lf",&x);
	printf("%.3lf\n",x);
}
