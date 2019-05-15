#define _CRT_SECURE_NO_WARNINGS
//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个数字，编程实现。
//
//
//【解决思路】：一组数中如果有1个不重复出现的数字，其他数字都重复出现2次，
//那么将所有的值异或在一起就是这个不重复的数字。例如：{ 1，1，2，2，3，3，4 }，
//所有值异或的结果是4。如果有2个不重复出现的数字，例如{ 1，1，2，2，3，3，4，5 }，
//所有值异或的结果是{ 4，5 }异或的结果为1。我们只要将这个异或的值分开就好：
//1.将所有值异或在一起，得到4和5异或的结果1
//2.找到异或结果1的二进制中第一个为1的位置
//3.按照这个位置分为两组，分别异或起来就得到最终的结果
#include <stdio.h>
#include<stdlib.h>
//#include<windows.h>
//
//void find_num(int arr[], int len)
//{
//	int i = 0;//循环变量
//	int ret = 0;//记录所有值异或的结果
//	int pos = 0;//记录ret二进制为第一个为1的位置
//	int x = 0;//将一组值异或在x，得到1个没有相同数字的值
//	int y = 0;//将另一组值异或在x，得到另1个没有相同数字的值
//	for (i = 0; i < len; i++)
//	{
//		ret ^= arr[i];
//	}//将数组的所有值异或
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((ret >> i) & 1))
//		{
//			pos = i;//第i个为1
//			break;
//		}
//	}//找到ret二进制为第一个为1的位置
//	for (i = 0; i < len; i++)
//	{
//		if (1 == ((arr[i] >> pos) & 1))
//		{
//			x ^= arr[i];
//		}
//		else
//			y ^= arr[i];
//	}//分组异或
//	printf("x=%d,y=%d\n", x, y);
//
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 1, 2, 3, 4, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	find_num(arr, sz);
//	system("pause");
//	return 0;
//}
//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。
//

//int main()
//{
//	int money;
//	printf("请输入钱数：\n");
//	scanf("%d", &money);
//	int drink;
//	int bottle;
//	drink = money;
//	bottle = money;
//	while (bottle >= 2)
//	{
//		drink += bottle / 2;//可喝的次数
//		bottle = bottle / 2 + bottle % 2;//剩余瓶数
//	}
//	printf("总共可以喝%d瓶汽水\n", drink);
//	system("pause");
//	return 0;
//}
//3.模拟实现strcpy
//char* my_strcpy(char* strdest, char* strsrc)
//{
//	if (strdest == NULL || strsrc == NULL)//判断两字符串是否为空
//	{
//		return NULL;
//	}
//	char *address = strdest;//保留一份strdest
//	while ((*strdest++ = *strsrc++) != '\0')//逐个复制到strdest之后
//	{
//		;
//	}
//	return address;
//}
//int main()
//{
//	char src[] = "abcdef";
//	char dest[] = { 0 };
//	my_strcpy(dest, src);
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c", dest[i]);
//	}
//	system("pause");
//	return 0;
//}
//4.模拟实现strcat
//#include<assert.h>
//char * my_strcat(char *dest, const char *src)
//{
//	//assert为判断是否为空
//	assert(dest);     //断言，若字符串为空，则不执行后面的代码
//	assert(src);      //断言，若字符串为空，则不执行后面的代码
//	char * ret = dest;
//	while (*dest)     //找出目标字符串的'\0'的位置
//	{
//		dest++;
//	}
//	while (*dest++ = *src++) //将源字符串的内容拷贝到目标字符串上
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char a[20] = "abcd";  //目标空间必须足够大且必须有\0
//	char b[5] = "efgh";   //源字符串必须有\0
//	my_strcat(a, b);
//	printf("%s\n", a);
//	system("pause");
//	return 0;
//}


