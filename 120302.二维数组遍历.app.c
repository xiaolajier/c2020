#include<stdio.h>
void main()
{
	int x[3][3]={
		{22,33,44},
		{55,66,77},
		{88,99,'H'}
	};
	int y,z;
	for (y=0;y<3;y++)
	{
		for (z=0;z<3;z++)
		{
		printf("%d ",x[y][z]);
		}
	printf("\n");
	}
}
