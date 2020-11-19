#include<stdio.h>
void main()
{
	int x;
	printf("请输入0或1,程序将输出性别（男/女）\n");
	scanf("%d",&x);
	if (x==1)
	{
		printf("男\n");
	}
	else if (x==0)
	{
		printf("女\n");
	}
	else
	{
		printf("输入有误，请重新输入\n");
	}
}
