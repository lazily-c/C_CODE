#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//清空缓冲区，VS2012用fflush(stdin)
//stdin是标准输入
//VS2013-VS2022清空标准输入缓冲区，用rewind
int main()
{
	int i,ret;
	while (rewind(stdin),(ret=scanf("%d", &i))!= EOF)//while是实现循环，后面要有一个小括号
	{
		printf("i=%d\n", i);
	}
	return 0;
}