#include<stdio.h>
#include<windows.h>
void main()
{
int a,b,c,d;
printf("请输入3个整数，程序将按降序向下排列...\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
printf("降序排列:\n");
if (a<b&&b<c)
{
	printf("%d\n%d\n%d\n",c,b,a);
}
else if (b<a&&a<c)
{
	printf("%d\n%d\n%d\n",c,a,b);
}
else if (c<b&&b<a)
{
	printf("%d\n%d\n%d\n",a,b,c);
}
else if (b<c&&c<a)
{
	printf("%d\n%d\n%d\n",a,c,b);
}
else if (c<a&&a<b)
{
	printf("%d\n%d\n%d\n",b,a,c);
}
else if (a<c&&c<b)
{
	printf("%d\n%d\n%d\n",b,c,a);
}
else
{
	printf("输入错误，请输入整数...\n");
}
}
