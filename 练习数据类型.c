//#include <stdio.h>
//
//1.下面程序输出是多少
//int main()
//{
//	printf("下面程序输出是：\n");
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(short int));
//	printf("%d\n", sizeof(long int));
//	printf("%d\n", sizeof(unsigned char));
//	printf("%d\n", sizeof(unsigned short));
//	printf("%d\n", sizeof(unsigned int));
//	printf("%d\n", sizeof(unsigned long));
//	printf("%d\n", sizeof(unsigned long long));
//	return 0;
//}

#include <stdio.h>
#include <limits.h>
#include <float.h>

//2.说一下下面类型的存储范围
/*
* a、char的存储范围
* b、unsigned char的存储范围
* c、short的存储范围
* d、unsigned short的存储范围
* e、int的存储范围
* f、unsigned int的存储范围
*/
int main()
{
	printf("char的存储范围是:%d-----%d\n", CHAR_MIN, CHAR_MAX);
	printf("unsigned char的存储范围是:%d-----%d\n",0, 255);
	printf("short的存储范围是:%d-----%d\n", SCHAR_MIN, SCHAR_MAX);
	printf("unsigned short的存储范围是:%d-----%d\n", 0, 65535);
	printf("int的存储范围是:%d-----%d\n", INT_MIN, INT_MAX);
	printf("unsigned int的存储范围是:%d-----%d\n", 0, UINT_MAX);
	return 0;

}