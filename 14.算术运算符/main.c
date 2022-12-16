#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int a = 4 + 5 * 2 - 6 / 3 + 11 % 4;
	printf("%d\n", a);
	scanf("%d", &a);
	printf("a=%d\n", a);//如果输入的是1234，那么现在想让大家输出4321
	while (a!=0)//当a不等于零就可以进入循环
	{
		printf("%d", a % 10 );
		a = a / 10;
	}
	printf("\n");
	return 0;
}