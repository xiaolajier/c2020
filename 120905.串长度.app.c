#include<stdio.h>
void main()
{
	char x[]="广西科技师范学院";
	char y[]="gxkjsfxy";
	printf("“%s”与“%s”的字符串长度分别为\n",x,y);
	printf("%d",sizeof(x));
	printf("\n");
	printf("%d",sizeof(y));
	printf("\n");
}
