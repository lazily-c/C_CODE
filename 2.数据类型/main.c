#include <stdio.h>

//int main()
//{
//	//1.�ַ���
//	char ch = 'a';
//	//2.����
//	int age = 20;
//	//3.������
//	short num = 10;
//	//4.������
//	long a = 30;
//	//5.��������
//	long long c = 40;
//	//6.�����ȸ�����
//	float weight = 50.5;
//	//7.˫���ȸ�����
//	double d = 0.0;
//	return;
//}


int main()
{
	printf("%d\n", 100);//��ӡһ������

	//sizeof -- �ؼ��� -- ������ -- �������ͻ��߱�����ռ�ռ�Ĵ�С(��λ���ֽ�(byte))
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	return 0;
}