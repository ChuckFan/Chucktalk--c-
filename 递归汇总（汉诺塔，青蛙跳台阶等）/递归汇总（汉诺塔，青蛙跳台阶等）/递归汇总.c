//��ŵ��
//��ŵ��û��ʲô������ԣ�ֻ��ͨ����ͷ��ӡ���⿪�Ĳ��輰����
#include<stdio.h>
#include<stdlib.h>
//
//void hanoi(int n, char a, char b, char c)//��Ϊ��a����b�ƶ���c
//{
//	if (n == 1)//��ֻ��һ�����ӣ���ֱ�Ӵ�a�ŵ�c
//	{
//		printf("%c-->%c\n", a, c);
//	}
//	else
//	{
//		hanoi(n - 1, a, c, b);//��a����c�Ƶ�b���������n-1���ŵ�b��Ȼ��a��n==1��ֱ�ӷŵ�c�����ƶ������n-1
//		printf("%c-->%c\n", a, c);
//		hanoi(n - 1, b, a, c);//��b����a�Ƶ�c����ʣ�µ�n-1���Ƶ�c
//	}
//}
//int main()
//{
//	hanoi(8, 'a', 'b', 'c');
//	system("pause");
//	return 0;
//}



//������̨�ף�
//һֻ����һ�ο�������1��̨�ף�Ҳ��������2����
//�����������һ��n����̨���ܹ��ж������������Ⱥ����ͬ�㲻ͬ�Ľ������
int jumpFloor2(int number)
{
	if (number <= 0)
	{
		return 0;
	}
	else if (number==1)
	{
		return 1;
	}
	else if (number == 2)
	{
		return 2;
	}
	else if (number == 3)
	{
		return 4;
	}
	else
		return jumpFloor2(number - 1) + jumpFloor2(number - 2)+jumpFloor2(number-3);
}
int main()
{
	jumpFloor2(15);
	printf("%d",jumpFloor2(15));
	system("pause");
	return 0;

}
