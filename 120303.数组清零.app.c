#include<stdio.h>
#include<windows.h>
void main()
{
	int y,z,k=999;
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
		{k,k,k,k,k,k,k,k,k,k},
		{k,k,k,k,k,k,k,k,k,k},
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
	for (y=0;y<20;y++)
	{
		for (z=0;z<10;z++)
		{
			printf("%d ",x[y][z]);
		}
		printf("\n");
	}
	Sleep(5000);
	for (y=0;y<20;y++)
	{
		for (z=0;z<10;z++)
		{
			x[y][z]=0;
			printf("%d   ",x[y][z]);
		}
		printf("\n");
	}
}
