#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//一个scanf输入多种类型的数据
//混合输入时每次在%c之前需要加一个空格
int main()
{
	int i;
	char c;
	float f;
	int ret;
	ret=scanf("%d %c%f", &i, &c, &f);
	printf("i=%d,c=%c,f=%f\n", i, c, f);
	return 0;
}