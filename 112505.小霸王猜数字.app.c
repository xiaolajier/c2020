#include<stdio.h>
#include<windows.h>
void main()
{
int a=55,b=1,c;
printf("小霸王猜数字（0~100,整数），你共有7次机会...\n");
while (b<=7)
{
printf("第%d次机会，请输入整数...",b);
scanf("%d",&c);
if (c==a)
{
printf("恭喜你，猜对了！\n");
b=b+7;
}
else if (c>a)
{
printf("不对，数字大了...\n");
}
else if (c<a)
{
printf("不对，数字小了...\n");
}
else
{
printf("输入错误...\n");
}
b++;
}
printf("游戏结束！\n");
}
