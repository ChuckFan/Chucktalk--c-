#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>//��ֹ��ʾtimeδ����
#define ROW 3
#define COL 3
//�����޸����̴�С������ֱ�Ӹ����鶨������
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
	printf("������ӣ�\n");
	while (1)
	{
		int row = 0;
		int col = 0;
		printf("������һ�����꣨row col):");
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= ROW || col < 0 || col >= COL)
		{
			printf("�����������Ƿ�������������:\n");
			continue;
		}
		if (g_broad[row][col] != ' ')
		{
			printf("��λ���Ѿ����ӣ�����������:\n");
			continue;
		}
		broad[row][col] = 'x';
		break;
	}
}
void Computermove(char broad[ROW][COL])
{
	printf("�������ӣ�\n");
	while (1)
	{
		int row = rand() % ROW;//��һ��Ϊ0-ROW
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
	//�����������������
	for (int row = 0; row < ROW; row++)
	{
		if (broad[row][0] == broad[row][1] &&
			broad[row][0] == broad[row][2] && broad[row][0]!= ' ')
		{
			return broad[row][0];
		}
	}
	//�����������������
	for (int col = 0; col < COL; col++)
	{
		if (broad[0][col] == broad[1][col] &&
			broad[0][col] == broad[2][col] && broad[0][col]!= ' ')
		{
			return broad[0][col];
		}
	}
    //���Խ��ߣ�������,��Ϊ�����Բ���Ҫѭ��
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
	//�ж��Ƿ����
	if (IsFull(broad))
	{
		return'q';
	}
	return ' ';
}
int main()
{
	//������ӵ����ã�ֻҪ����������ʱ������һ�ξ�����
	srand((unsigned int)time(0));
	//1.�ȶ����̳�ʼ���ɿո�
	Init(g_broad);
	char winner = ' ';
	while (1)
	{
	//2.��ӡ���̣���ʱ��һ�������̣�
	Print(g_broad);
	//3.������ӣ������Ϸ�Ƿ����
	Playermove(g_broad);
	//winner=>x���ʤ����o����ʤ����q���壬�� ���Ƿ�����
    winner = Checkwinner(g_broad);
	if (winner = !' ')
	{
		break;
	}
	//4.�������ӣ������Ϸ�Ƿ����
	Computermove(g_broad);
	winner = Checkwinner(g_broad);
	if (winner !=' ')
	{
		break;
	}
	}
	if (winner == 'x')
	{
		printf("���ʤ��\n");
	}
	else if (winner == 'o')
	{
		printf("����ʤ��\n");
	}
	else if (winner == 'q')
	{
		printf("����\n");
	}
	else
	{
		printf("�Ƿ�����\n");
	}
	//5.ѭ����2��
	system("pause");
	return 0;
}