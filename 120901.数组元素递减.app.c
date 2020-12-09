#include<stdio.h>
#include<windows.h>
void main()
{
	int y,z,k=0,g=90;
	int x[20][10]={
		{k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k},
	};
	printf("这是一个二维数组，元素全为0，程序将为其赋值（从90递减至1）...\n");
	for (y=0;y<9;y++)
	{
		for (z=0;z<10;z++)
		{
			printf(" %d   ",x[y][z]);
		}
		printf("\n");
	}
	printf("请等待，两秒后输出...\n");
	Sleep(2000);
	for (y=0;y<9;y++)
	{
		for (z=0;z<10;z++)
		{
			x[y][z]=g;
			printf("%d   ",x[y][z]);
			if (g<=10)
			{
				printf(" ");
			}
			g--;
		}
		printf("\n");
	}
}
