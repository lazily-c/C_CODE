#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��ջ�������VS2012��fflush(stdin)
//stdin�Ǳ�׼����
//VS2013-VS2022��ձ�׼���뻺��������rewind
int main()
{
	int i,ret;
	while (rewind(stdin),(ret=scanf("%d", &i))!= EOF)//while��ʵ��ѭ��������Ҫ��һ��С����
	{
		printf("i=%d\n", i);
	}
	return 0;
}