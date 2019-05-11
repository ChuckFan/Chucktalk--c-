#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//1.
//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 
//}
//

//int count_one_bits(unsigned int value)
//{
//	int num = 0;
//	while (value)
//	{
//		if (value % 2)
//		
//			num++;
//			value = value / 2;
//		
//	}
//	return num;
//}
//int main()
//{
//	int i = 0;
//	int num = 0;
//	printf("输入一个数：\n");
//	scanf("%d", &i);
//	num = count_one_bits(i);
//	printf("num=%d\n", num);
//	system("pause");
//	return 0;
//}
//





//3. 输出一个整数的每一位。
//
//int Ans(int n)
//{
//	if (n > 9)
//	{
//		Ans(n / 10);
//	}
//	else
//		printf("%d\n", n % 10);	
//}
//int main()
//{
//	int i;
//	printf("请输入一个数：\n");
//	scanf("%d", &i);
//	Ans(i);
//	while (i)
//	{
//		printf("%d ", i % 10);
//		i = i / 10;
//	}
//	system("pause");
//	return 0;
//
//
//
//}

