#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//������Ϸʵ��
//int main()
//{
//	time_t;//int/long long
//	//RAND_MAX;
//	srand((unsigned int)time(NULL));
//	//%100+1�Ƕ�������Ϸ��Χ�Ŀ��ƣ�1-100�������
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	return 0;
//}

//��ӡ��Ϸ�˵�
void menu()
{
	printf("***********************\n");
	printf("****** 1. play ******\n");
	printf("****** 0. exit ******\n");
	printf("***********************\n");
}

//ִ����Ϸ
void game()
{
	int guess = 0;
	//1.���������
	int r = rand() % 100 + 1;
	//printf("%d", r);
	//2.������
	int count = 5;//���Ʋ²����
	while (count)
	{
		printf("\n�㻹��%d�λ���\n", count);
		printf("�²����֣�");
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("�´���\n");
		}
		else if (guess < r)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
		}
		count--;
	}
	if (count == 0)
	{
		printf("��ʧ���ˣ���ȷֵ��:%d\n", r);
	}
}




int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		//��ӡ�˵�
		menu();

		printf("��ѡ��>");
		scanf("%d", &input);//1 0 8
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}