#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//һ��scanf����������͵�����
//�������ʱÿ����%c֮ǰ��Ҫ��һ���ո�
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