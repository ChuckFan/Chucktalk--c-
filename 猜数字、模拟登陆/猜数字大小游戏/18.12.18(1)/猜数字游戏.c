#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void game()
{
	int aim = rand()%49+50;
	int guess;
	while (1)
	{
		printf("请输入你的答案\n");
		scanf("%d", &guess);
		if (guess == aim)
		{
			printf("猜对了，游戏结束\n");
			break;
		}
		else if (guess < aim)
		{
			printf("猜小了，请继续\n");
		}
		else
		{
			printf("猜大了，请继续\n");
		}
	}
}
int main()
{
	int input;
	srand((unsigned int)time(NULL));//srand()是用来初始化随机种子数的
	//srand（（int）time（NULL））；设定随机数种子
	//rand() % 100；产生0 - 99的随机数。
	//高级点的，假如要产生16 - 59之间的数，你可以这样写：rand（） % 44 + 16（这里44由59 - 16 + 1得到）
	//即要产生随机数r， 其范围为 m<=r<=n，可以使用如下公式：
	//rand() % (n - m + 1) + m
	do
	{
		printf("   1.play   \n");
		printf("   0.exit   \n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			system("pause\n");
			break;
		case 0:
			break;
		default:
			printf("输入选项有误，请重新输入\n");
		}
	} while (input);
	//input为1则返回初始值继续执行game，否则为0结束；
	return 0;
}