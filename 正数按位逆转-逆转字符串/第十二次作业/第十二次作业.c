#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//1.��д������
unsigned int reverse_bit(unsigned int value)
{
	int ret = 0;
	int i;
	for (i = 0; i < 32; i++)
	{
		int n = value & 0x01;//��1��֮��ȡ������������һλ
		ret |= n << (32-i-1);//��ȡ���Ķ�����λ���һλ����31λ
		//֮��ÿ������31-iλ����ÿһ���ƶ����ֵ������
		value = value >> 1;//��0x01��֮��������һλ�ٴ���0x01��һ��
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
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��

//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832




//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
//
//����1��a������Ϊ��������b���������ƽ��
//
//int Average(int i, int j)
//{
//	int ans;
//	if (i > j)
//	{
//		ans = j + ((i - j) / 2);
//		printf("��������ƽ����Ϊ��%d\n", ans);
//	}
//	else if (j >= i)
//	{
//		ans = i + ((j - i) / 2);
//		printf("��������ƽ����Ϊ��%d\n", ans);
//	}
//	return 0;
//}
//int main()
//{
//	int a;
//	int b;
//	printf("������a��ֵ��\n");
//	scanf("%d", &a);
//	printf("������b��ֵ��\n");
//	scanf("%d", &b);
//	int print = Average(a, b);
//	system("pause");
//	return 0;
//}
//����2����a��b��ͬ�Ĳ��ּ���a��b��ͬ�ĵط���a��b��ͬ�Ĳ���Ϊ��a&b����
//a��b��ͬ�Ĳ���Ϊ��a^b������ͬ�Ĳ��ֳ��Զ����ǣ�a^b >> 1��
//
//int main()
//{
//	int a = 25;
//	int b = 5;
//	printf("%d\n", (a&b) + ((a^b) >> 1));//����һλ�൱�ڳ��Զ�
//	//��ͬ���ּ��ϣ���ͬ���ֳ��Զ���
//	system("pause");
//	return 0;
//}







//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
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
//		arr[0] = arr[0] ^ arr[i];//^��������������Ϊ1����Ϊ0.
//	//��Ϊ���ӵ�һ������ʼ���ڶ����������������һ��������������û������໥������
//		//���ԳɶԵĶ��������ˣ����ʣ�µľ�Ϊ��������
//	}
//	printf("the single number is:%d", arr[0]);
//	system("pause");
//	return 0;
//}
//4.
//��һ���ַ����������Ϊ:"student a am i",
//			���㽫��������ݸ�Ϊ"i am a student".
//			Ҫ��
//			����ʹ�ÿ⺯����
//			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
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
//int mystrlen(char* str)//�����������ַ�������
//{
//	int count = 0;
//	while (*str)//û�е�/0��һֱ����
//	{
//		count++;
//		++str;
//	}
//	return count;
//}
//void reverse(char* str)
//{
//	//������ת
//	char* start = str;//��ת���
//	char* end = str + mystrlen(str) - 1;//��ת�յ�
//	char* cur = str;
//	reverse_string(start, end);
//	//�ֲ���ת
//	while (*cur)
//	{
//		char* sub_start = cur;//�Ӵ����
//		while ((*cur != ' ') && (*cur != '\0'))//�Ӵ�β��
//		{
//			++cur;
//		}
//		//��ת�Ӵ�
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
