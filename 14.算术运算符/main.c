#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int a = 4 + 5 * 2 - 6 / 3 + 11 % 4;
	printf("%d\n", a);
	scanf("%d", &a);
	printf("a=%d\n", a);//����������1234����ô�������ô�����4321
	while (a!=0)//��a��������Ϳ��Խ���ѭ��
	{
		printf("%d", a % 10 );
		a = a / 10;
	}
	printf("\n");
	return 0;
}