#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//1.递归求斐波那锲数列
//int Fib(int n)//第n个数
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n;
//	printf("请输入要求第几个数：");
//	scanf("%d",&n);
//	int Answer = Fib(n);
//	printf("则第n个数的结果为：%d\n", Answer);
//	system("pause");
//	return 0;
//}

//2.编写一个函数实现n^k，使用递归实现 
//int Abc(int n, int k)
//{
//	if (k == 0)
//	{
//		return 0;
//	}
//	else if (k == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return n*Abc(n, k - 1);
//	}
//}
//int main()
//{
//	int n;
//	int k;
//	printf("请输入n:");
//	scanf("%d", &n);
//	printf("请输入k:");
//	scanf("%d", &k);
//	int Answer = Abc(n, k);
//	printf("结果为:%d\n", Abc(n,k));
//	system("pause");
//	return 0;
//}


//3. 写一个递归函数c，输入一个非负整数，返回组成它的数字之和， 
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//int DigitSum(int n)
//{
//	if (n < 9)
//	
//		return n;
//	
//	else
//	
//		return (n % 10) + DigitSum(n / 10);
//	
//}
//int main()
//{
//	int n=0;
//	printf("请输入一个四位数：");
//	scanf("%d", &n);
//	int Answer = DigitSum(n);
//	printf("则结果为：%d\n", Answer);
//	system("pause");
//	return 0;
//}


//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//int   reverse_string(char * string)
//{
//	if (*string != '\0')
//	{   //判断string中ASCII值是否为0,在C语言中以'\0'作为结束字符
//		string++;  //一直向后进行统计元素
//		reverse_string(string);
//		printf("%c", *(string - 1));
//		   // string-1指字符串中从最后一个元素输出 
//	}
//	return 0;
//}
//int main()
//{
//	char* string = "abcde";
//	reverse_string(string);
//	system("pause");
//	return 0;
//}