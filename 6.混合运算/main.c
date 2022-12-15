#include <stdio.h>

int main()
{
	int i = 5;
	float j = i / 2;//j输出的是2
	float k = (float)i / 2;//k输出的是2.5
	printf("j=%f k=%f\n", j, k);
}