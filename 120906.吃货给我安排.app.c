#include<stdio.h>
void main()
{
	char x[7];
	char x1[]="春节";
	char x2[]="端午节";
	char x3[]="中秋节";
	char x4[]="元宵节";
	printf("请输入节日（如：春节，端午节，中秋节，元宵节），我将向你推荐美食...\n");
	scanf("%s",&x);
	if (strcmp(x,x1)==0)
	{
		printf("给你安排饺子\n");
	}
	else if (strcmp(x,x2)==0)
	{
		printf("给你安排粽子\n");
	}
	else if (strcmp(x,x3)==0)
	{
		printf("给你安排月饼\n");
	}
	else if (strcmp(x,x4)==0)
	{
		printf("给你安排元宵\n");
	}
	else
	{
		printf("输入有误...\n");
	}
}
