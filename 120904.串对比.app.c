#include<stdio.h>
void main()
{
char x[]="你好";
char y[]="你不好";
printf("“%s”与“%s”",x,y);
if (strcmp(x,y)==0)
{
printf("相同\n");
}
else
{
printf("不相同\n");
}
}
