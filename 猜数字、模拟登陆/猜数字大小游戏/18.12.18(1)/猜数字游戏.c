#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void game()
{
	int aim = rand()%49+50;
	int guess;
	while (1)
	{
		printf("��������Ĵ�\n");
		scanf("%d", &guess);
		if (guess == aim)
		{
			printf("�¶��ˣ���Ϸ����\n");
			break;
		}
		else if (guess < aim)
		{
			printf("��С�ˣ������\n");
		}
		else
		{
			printf("�´��ˣ������\n");
		}
	}
}
int main()
{
	int input;
	srand((unsigned int)time(NULL));//srand()��������ʼ�������������
	//srand����int��time��NULL�������趨���������
	//rand() % 100������0 - 99���������
	//�߼���ģ�����Ҫ����16 - 59֮����������������д��rand���� % 44 + 16������44��59 - 16 + 1�õ���
	//��Ҫ���������r�� �䷶ΧΪ m<=r<=n������ʹ�����¹�ʽ��
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
			printf("����ѡ����������������\n");
		}
	} while (input);
	//inputΪ1�򷵻س�ʼֵ����ִ��game������Ϊ0������
	return 0;
}