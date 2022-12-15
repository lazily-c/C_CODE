#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c;
	while (scanf("%c", &c) != EOF)
	{
		if (c != '\n')//判段，后面有一个小括号，括号里边是一个表达式
		{
			printf("%c", c - 32);
		}
		else
		{//else就是否则
			printf("\n");
		}
	}
}