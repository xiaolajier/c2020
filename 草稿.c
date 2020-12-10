#include<stdio.h>
#include<windows.h>
#include<string.h>
int main()
{
	char a;
	char b[]="西游记";
	int x,y,z=33;
	printf("欢迎来到*猜数字小游戏*                 密码：\n");
	Sleep(1000);
	printf("对了！进入游戏需输入密码呢...            西\n");
	Sleep(1000);
	printf("密码错误就无法运行游戏哦！               游\n");
	Sleep(1000);
	printf("好了好了，不多说了，请输入密码...        记\n");
	scanf("%s",&a);
	if (strcmp(a,b)==0)
	{
		printf("密码正确，游戏运行成功...\n");
		printf("欢迎使用*猜数字小游戏*\n");
		printf("请输入一个整数（1~100），看你能否猜对，请注意：\n##你共有7次机会##");
		for (x=1;x<8;x++)
		{
			printf("这是第%d次机会，请输入...",x);
			scanf("%d",y);
			if (y==z)
			{
				printf("恭喜你，猜对了！\n");
				x=8;
			}
			else if (y<z)
			{
				printf("不对，小了哦！\n");
			}
			else if (y>z)
			{
				printf("不对，大了哦！\n");
			}
			else
			{
				printf("输入有误，请输入整数（1~100）...\n");
			}
		}
	}
	else
	{
		printf("密码错误，游戏无法运行...\n");
	}
	printf("结束...\n");
}
