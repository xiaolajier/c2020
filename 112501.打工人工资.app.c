#include<stdio.h>
void main()
{
int a;
printf("请输入您的工资（整数）：");
scanf("%d",&a);
if (a>=0 && a<=100)
{
printf("您的工资认定为：贫困打工人！\n");
}
else if (a>=101 && a<=1000)
{
printf("您的工资认定为：一般打工人！\n");
}
else if (a>=1001 && a<=20000)
{
printf("您的工资认定为：土豪打工人！\n");
}
else
{
printf("输入有误，请重新输入...\n");
}
}
