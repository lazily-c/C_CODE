//#include <stdio.h>
//
//1.�����������Ƕ���
//int main()
//{
//	printf("�����������ǣ�\n");
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

//2.˵һ���������͵Ĵ洢��Χ
/*
* a��char�Ĵ洢��Χ
* b��unsigned char�Ĵ洢��Χ
* c��short�Ĵ洢��Χ
* d��unsigned short�Ĵ洢��Χ
* e��int�Ĵ洢��Χ
* f��unsigned int�Ĵ洢��Χ
*/
int main()
{
	printf("char�Ĵ洢��Χ��:%d-----%d\n", CHAR_MIN, CHAR_MAX);
	printf("unsigned char�Ĵ洢��Χ��:%d-----%d\n",0, 255);
	printf("short�Ĵ洢��Χ��:%d-----%d\n", SCHAR_MIN, SCHAR_MAX);
	printf("unsigned short�Ĵ洢��Χ��:%d-----%d\n", 0, 65535);
	printf("int�Ĵ洢��Χ��:%d-----%d\n", INT_MIN, INT_MAX);
	printf("unsigned int�Ĵ洢��Χ��:%d-----%d\n", 0, UINT_MAX);
	return 0;

}