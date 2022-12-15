#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//原理对于初试不重要，机试很重要
//缓冲区为空的时候，scanf才会卡住（阻塞）
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