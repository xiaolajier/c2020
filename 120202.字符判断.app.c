#include<stdio.h>
void main()
{
	char x;
	printf("欢迎使用*ADWS方向键故障测试*：请点击ADWS方向键（请勿锁定大写），并单击回车键以判断是否出现故障...\n");
	scanf("%c",&x);
	switch(x)
	{
		case 'a':printf("您点击了左键（A），无故障\n",x);break;
		case 's':printf("您点击了下键（S），无故障\n",x);break;
		case 'd':printf("您点击了右键（D），无故障\n",x);break;
		case 'w':printf("您点击了上键（W），无故障\n",x);break;
		default:printf("点击有误！请点击ADWS方向键（请勿锁定大写），并单击回车键以判断是否出现故障...\n");break;
	}
}
