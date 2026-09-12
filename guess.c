#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void menu()
{
	printf("---------------------\n");
	printf("--------1.play--------\n");
	printf("--------0.exit-------\n");
	printf("---------------------\n");
	printf("请选择:");
}

void game()
{
	int guess = 0;
	int r = rand() % 100 + 1;
	int count = 20;
	while (count)
	{
		printf("你还有%d次机会\n", count);
		printf("请猜数字");
		(void)scanf("%d", &guess);
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
			printf("恭喜你,猜对了\n");
			break;
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
		menu();
		printf("请选择:>");
		(void)scanf("%d", &input);
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
		}
	} while (input);
	return 0;
}