#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>//防止显示time未定义
#define ROW 3
#define COL 3
//方便修改棋盘大小，不用直接给数组定义数字
char g_broad[ROW][COL];
void Init(char broad[ROW][COL])
{
	for (int row = 0; row < ROW; row++)
	{
		for (int col = 0; col < COL; col++)
		{
			broad[row][col] = ' ';
		}
	}
}
void Print(char broad[ROW][COL])
{
	for (int row = 0; row < ROW; row++)
	{
		printf("| %c | %c | %c|\n", broad[row][0],
			broad[row][1], broad[row][2]);
		if (row != ROW - 1){
			printf(" ---|---|---\n");
		}
	}
}
void Playermove(char broad[ROW][COL])
{
	printf("玩家落子！\n");
	while (1)
	{
		int row = 0;
		int col = 0;
		printf("请输入一组坐标（row col):");
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= ROW || col < 0 || col >= COL)
		{
			printf("您输入的坐标非法！请重新输入:\n");
			continue;
		}
		if (g_broad[row][col] != ' ')
		{
			printf("该位置已经有子！请重新输入:\n");
			continue;
		}
		broad[row][col] = 'x';
		break;
	}
}
void Computermove(char broad[ROW][COL])
{
	printf("电脑落子！\n");
	while (1)
	{
		int row = rand() % ROW;//则一定为0-ROW
		int col = rand() % COL;
		if (broad[row][col] != ' ')
		{
			continue;
		}
		broad[row][col] = 'o';
		break;
	}
}
int IsFull(char broad[ROW][COL])
{
	for (int row = 0; row < ROW; row++)
	{
		for (int col = 0; col < COL; col++)
		{
			if (broad[row][col] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char Checkwinner(char broad[ROW][COL])
{
	//检查行有无三个连子
	for (int row = 0; row < ROW; row++)
	{
		if (broad[row][0] == broad[row][1] &&
			broad[row][0] == broad[row][2] && broad[row][0]!= ' ')
		{
			return broad[row][0];
		}
	}
	//检查列有无三个连子
	for (int col = 0; col < COL; col++)
	{
		if (broad[0][col] == broad[1][col] &&
			broad[0][col] == broad[2][col] && broad[0][col]!= ' ')
		{
			return broad[0][col];
		}
	}
    //检查对角线（两条）,因为少所以不需要循环
	if (broad[0][0] == broad[1][1] && 
		broad[0][0] == broad[2][2] && broad[0][0] != ' ')
	{
		return broad[0][0];
	}
	if (broad[2][0] == broad[1][1] && 
		broad[2][0] == broad[0][2] && broad[2][0] != ' ')
	{
		return broad[2][0];
	}
	//判定是否和棋
	if (IsFull(broad))
	{
		return'q';
	}
	return ' ';
}
int main()
{
	//随机种子的设置，只要程序启动的时候设置一次就行了
	srand((unsigned int)time(0));
	//1.先对棋盘初始化成空格
	Init(g_broad);
	char winner = ' ';
	while (1)
	{
	//2.打印棋盘（此时是一个空棋盘）
	Print(g_broad);
	//3.玩家落子，检查游戏是否结束
	Playermove(g_broad);
	//winner=>x玩家胜利，o电脑胜利，q和棋，‘ ’非法操作
    winner = Checkwinner(g_broad);
	if (winner = !' ')
	{
		break;
	}
	//4.电脑落子，检查游戏是否结束
	Computermove(g_broad);
	winner = Checkwinner(g_broad);
	if (winner !=' ')
	{
		break;
	}
	}
	if (winner == 'x')
	{
		printf("玩家胜利\n");
	}
	else if (winner == 'o')
	{
		printf("电脑胜利\n");
	}
	else if (winner == 'q')
	{
		printf("和棋\n");
	}
	else
	{
		printf("非法操作\n");
	}
	//5.循环第2步
	system("pause");
	return 0;
}