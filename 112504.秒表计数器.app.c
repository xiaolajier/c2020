#include<stdio.h>
#include<windows.h>
void main()
{
int a=1;
printf("欢迎使用HHXX秒表计数器:\n");
while (1)
{
Sleep(1000);
printf("%d秒过去了...\n",a);
a++;
}
}
