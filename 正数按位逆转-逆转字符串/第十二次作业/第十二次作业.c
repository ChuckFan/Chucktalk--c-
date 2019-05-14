#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//1.编写函数：
unsigned int reverse_bit(unsigned int value)
{
	int ret = 0;
	int i;
	for (i = 0; i < 32; i++)
	{
		int n = value & 0x01;//和1与之后取出这个数的最后一位
		ret |= n << (32-i-1);//将取出的二进制位最后一位左移31位
		//之后每次左移31-i位，把每一次移动后的值加起来
		value = value >> 1;//与0x01与之后再右移一位再次与0x01与一次
	}
	return ret;
}
int main()
{
	int value = 0;
	printf("set a number\n");
	scanf("%d", &value);
	printf("reverse is :%u\n", reverse_bit(value));
	system("pause");
	return 0;
}
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：

//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832




//2.不使用（a + b） / 2这种方式，求两个数的平均值。
//
//方法1：a（假设为大数）比b多出来的数平分
//
//int Average(int i, int j)
//{
//	int ans;
//	if (i > j)
//	{
//		ans = j + ((i - j) / 2);
//		printf("则两数的平均数为：%d\n", ans);
//	}
//	else if (j >= i)
//	{
//		ans = i + ((j - i) / 2);
//		printf("则两数的平均数为：%d\n", ans);
//	}
//	return 0;
//}
//int main()
//{
//	int a;
//	int b;
//	printf("请输入a的值：\n");
//	scanf("%d", &a);
//	printf("请输入b的值：\n");
//	scanf("%d", &b);
//	int print = Average(a, b);
//	system("pause");
//	return 0;
//}
//方法2：用a和b相同的部分加上a和b不同的地方，a和b相同的部分为（a&b），
//a和b不同的部分为（a^b），不同的部分除以二就是（a^b >> 1）
//
//int main()
//{
//	int a = 25;
//	int b = 5;
//	printf("%d\n", (a&b) + ((a^b) >> 1));//右移一位相当于除以二
//	//相同部分加上（不同部分除以二）
//	system("pause");
//	return 0;
//}







//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
//
//int main()
//{
//	int arr[] = { 1, 5, 5, 1, 7, 6, 7, 8, 8, 9, 9 };
//	int i = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//
//	for (i = 1; i < len; i++)
//	{
//		arr[0] = arr[0] ^ arr[i];//^异或运算符，相异为1想用为0.
//	//意为，从第一个数开始异或第二个，逐个进行遇到一对了两次异或等于没有异或（相互抵消）
//		//所以成对的都消除完了，最后剩下的就为单独的数
//	}
//	printf("the single number is:%d", arr[0]);
//	system("pause");
//	return 0;
//}
//4.
//有一个字符数组的内容为:"student a am i",
//			请你将数组的内容改为"i am a student".
//			要求：
//			不能使用库函数。
//			只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//			student a am i
//			i ma a tneduts
//			i am a student
//void reverse_string(char* start, char* end)
//{
//	while (start < end)
//	{
//		char tmp = *start;
//		*start = *end;
//		*end = tmp;
//		start++;
//		end--;
//	}
//}
//int mystrlen(char* str)//计数，测量字符串长度
//{
//	int count = 0;
//	while (*str)//没有到/0则一直进行
//	{
//		count++;
//		++str;
//	}
//	return count;
//}
//void reverse(char* str)
//{
//	//整体逆转
//	char* start = str;//逆转起点
//	char* end = str + mystrlen(str) - 1;//逆转终点
//	char* cur = str;
//	reverse_string(start, end);
//	//局部逆转
//	while (*cur)
//	{
//		char* sub_start = cur;//子串起点
//		while ((*cur != ' ') && (*cur != '\0'))//子串尾点
//		{
//			++cur;
//		}
//		//逆转子串
//		reverse_string(sub_start, cur - 1);
//		while (*cur == ' ')
//		{
//			++cur;
//		}
//	}
//}
//int main()
//{
//	char str[100];
//	gets(str);
//	reverse(str);
//	printf("%s", str);
//	system("pause");
//	return 0;
//
//}
