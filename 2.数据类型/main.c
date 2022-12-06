#include <stdio.h>

//int main()
//{
//	//1.字符型
//	char ch = 'a';
//	//2.整型
//	int age = 20;
//	//3.短整型
//	short num = 10;
//	//4.长整型
//	long a = 30;
//	//5.长长整型
//	long long c = 40;
//	//6.单精度浮点型
//	float weight = 50.5;
//	//7.双精度浮点型
//	double d = 0.0;
//	return;
//}


int main()
{
	printf("%d\n", 100);//打印一个整数

	//sizeof -- 关键字 -- 操作符 -- 计算类型或者变量所占空间的大小(单位是字节(byte))
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	return 0;
}