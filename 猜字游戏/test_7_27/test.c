#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//猜字游戏实现
//int main()
//{
//	time_t;//int/long long
//	//RAND_MAX;
//	srand((unsigned int)time(NULL));
//	//%100+1是对生成游戏范围的控制，1-100的随机数
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	return 0;
//}

//打印游戏菜单
void menu()
{
	printf("***********************\n");
	printf("****** 1. play ******\n");
	printf("****** 0. exit ******\n");
	printf("***********************\n");
}

//执行游戏
void game()
{
	int guess = 0;
	//1.生成随机数
	int r = rand() % 100 + 1;
	//printf("%d", r);
	//2.猜数字
	int count = 5;//限制猜测次数
	while (count)
	{
		printf("\n你还有%d次机会\n", count);
		printf("猜猜数字：");
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("猜大了\n");
		}
		else if (guess < r)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
		}
		count--;
	}
	if (count == 0)
	{
		printf("你失败了，正确值是:%d\n", r);
	}
}




int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		//打印菜单
		menu();

		printf("请选择：>");
		scanf("%d", &input);//1 0 8
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}