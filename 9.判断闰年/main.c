#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int year, i, j = 5;
	scanf("%d", &year);
	//���Ա�400���������߿��Ա�4�������������Ա�100����
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
	{
		printf("yes\n");
	}
	else {
		printf("no\n");
	}
	//ѧϰ�߼���
	i = !!j;
	printf("i��ֵ=%d\n", i);
}