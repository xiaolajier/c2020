#include<stdio.h>
void main()
{
	int x;
	printf("请输入你的每月工资水平（整数），程序将显示你的工资等级...\n");
	scanf("%d",&x);
	if (x<0)
	{
		printf("你还有花呗没还，无法使用该程序。\n");
	}
	else if (x>=0&&x<=500)
	{
		printf("赤贫\n");
	}
	else if (x>=501&&x<=1500)
	{
		printf("贫困\n");
	}
	else if (x>=1501&&x<=3000)
	{
		printf("普通打工人\n");
	}
	else if (x>=3001&&x<=5000)
	{
		printf("普通清洁工\n");
	}
	else if (x>=5001&&x<=12000)
	{
		printf("水电工工资\n");
	}
	else if (x>=12001&&x<=50000)
	{
		printf("脑袋大脖子粗不是老板就是伙夫\n");
	}
	else if (x>=50001&&x<=200000000)
	{
		printf("程序员\n");
	}
	else
	{
		printf("超出范围！！！\n");
	}
}
