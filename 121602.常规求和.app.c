#include<stdio.h>
#include<windows.h>
#include<string.h>
void main(){
	int x,y=0,z=0;
	printf("您好，请输入一个整数x（x>0），进行y=0+1+2+3+...+x的运算，并输出y...\nx=");
	scanf("%d",&x);
	while (y<=x){
		z=z+y;
		y++;
	}
	printf("y=%d\n",z);
}
