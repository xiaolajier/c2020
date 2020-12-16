#include<stdio.h>
#include<windows.h>
#include<string.h>
int x(int y){
	if (y<=0){
    return 0;
	}
  return y+x(y-1);
}
void main(){
	int z;
	printf("您好，请输入一个整数（x>0）,作为递归求和函数的输入值，并输出y...\nx=");
  scanf("%d",&z);
  printf("y=%d\n",x(z));
}
