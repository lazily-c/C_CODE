#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ԭ����ڳ��Բ���Ҫ�����Ժ���Ҫ
//������Ϊ�յ�ʱ��scanf�ŻῨס��������
int main()
{
	int i;
	char c;
	float f;
	scanf("%d", &i);
	printf("i=%d\n", i);
	//scanf("%c", &c);
	//printf("c=%c\n", c);
	scanf("%f", &f);
	printf("f=%f\n", f);
}