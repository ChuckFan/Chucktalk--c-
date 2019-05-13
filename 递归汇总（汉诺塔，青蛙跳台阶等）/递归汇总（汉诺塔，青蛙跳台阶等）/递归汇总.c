//汉诺塔
//汉诺塔没有什么结果而言，只是通过箭头打印出解开的步骤及流程
#include<stdio.h>
#include<stdlib.h>
//
//void hanoi(int n, char a, char b, char c)//意为从a借助b移动到c
//{
//	if (n == 1)//若只有一个盘子，则直接从a放到c
//	{
//		printf("%c-->%c\n", a, c);
//	}
//	else
//	{
//		hanoi(n - 1, a, c, b);//从a借助c移到b，把上面的n-1个放到b，然后a上n==1，直接放到c，在移动下面的n-1
//		printf("%c-->%c\n", a, c);
//		hanoi(n - 1, b, a, c);//从b借助a移到c，把剩下的n-1个移到c
//	}
//}
//int main()
//{
//	hanoi(8, 'a', 'b', 'c');
//	system("pause");
//	return 0;
//}



//青蛙跳台阶：
//一只青蛙一次可以跳上1级台阶，也可以跳上2级。
//求该青蛙跳上一个n级的台阶总共有多少种跳法（先后次序不同算不同的结果）。
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
