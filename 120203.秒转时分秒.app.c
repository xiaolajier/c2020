#include<stdio.h>
void main()
{
	int x,h,d,s;
	printf("欢迎使用*秒数转时分秒小程序*：请输入0~86399的整数（单位：秒）...\n");
	scanf("%d",&x);
	h=x/3600;
	d=(x%3600)/60;
	s=(x%3600)%60;
	if (x<0&&x>86399)
	{
		printf("你所输入的数值已超出范围（0~86399的整数）...\n");
	}
	else if (h>9&&d>9&&s>9)
	{
		printf("转换结果为\n%d:%d:%d\n",h,d,s);
	}
	else if (h<=9&&d>9&&s>9)
	{
		printf("转换结果为\n0%d:%d:%d\n",h,d,s);
	}
	else if (h>9&&d<=9&&s>9)
	{
		printf("转换结果为\n%d:0%d:%d\n",h,d,s);
	}
	else if (h>9&&d>9&&s<=9)
	{
		printf("转换结果为\n%d:%d:0%d\n",h,d,s);
	}
	else if (h>9&&d<=9&&s<=9)
	{
		printf("转换结果为\n%d:0%d:0%d\n",h,d,s);
	}
	else if (h<=9&&d>9&&s<=9)
	{
		printf("转换结果为\n0%d:%d:0%d\n",h,d,s);
	}
	else if (h<=9&&d<=9&&s>9)
	{
		printf("转换结果为\n0%d:0%d:%d\n",h,d,s);
	}
	else if (h<=9&&d<=9&&s<=9)
	{
		printf("转换结果为\n0%d:0%d:0%d\n",h,d,s);
	}
}
