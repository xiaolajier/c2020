#include<stdio.h>
#include<windows.h>
void main()
{
	int y,z,k=0,g=1;
	int x[19][20]={
		{k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k,k}
	};
	printf("这是一个二维数组，元素全为0，程序将为其赋值（从1递增至380）...\n");
	for (y=0;y<19;y++)
	{
		for (z=0;z<20;z++)
		{
			printf("  %d ",x[y][z]);
		}
		printf("\n");
	}
	printf("请等待，两秒后输出...\n");
	Sleep(2000);
	for (y=0;y<19;y++)
	{
		for (z=0;z<20;z++)
		{
			if (g<10)
			{
				printf("  ");
			}
			else if (g>=10&&g<100)
			{
				printf(" ");
			}
			x[y][z]=g;
			printf("%d ",x[y][z]);
			g++;
		}
		printf("\n");
	}
}
