#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int year, i, j = 5;
	scanf("%d", &year);
	//可以被400整除，或者可以被4整除，但不可以被100整除
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
	{
		printf("yes\n");
	}
	else {
		printf("no\n");
	}
	//学习逻辑非
	i = !!j;
	printf("i的值=%d\n", i);
}