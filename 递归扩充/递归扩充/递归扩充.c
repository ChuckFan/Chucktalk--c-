#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//1.�ݹ���쳲���������
//int Fib(int n)//��n����
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n;
//	printf("������Ҫ��ڼ�������");
//	scanf("%d",&n);
//	int Answer = Fib(n);
//	printf("���n�����Ľ��Ϊ��%d\n", Answer);
//	system("pause");
//	return 0;
//}

//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ�� 
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
//	printf("������n:");
//	scanf("%d", &n);
//	printf("������k:");
//	scanf("%d", &k);
//	int Answer = Abc(n, k);
//	printf("���Ϊ:%d\n", Abc(n,k));
//	system("pause");
//	return 0;
//}


//3. дһ���ݹ麯��c������һ���Ǹ����������������������֮�ͣ� 
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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
//	printf("������һ����λ����");
//	scanf("%d", &n);
//	int Answer = DigitSum(n);
//	printf("����Ϊ��%d\n", Answer);
//	system("pause");
//	return 0;
//}


//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//int   reverse_string(char * string)
//{
//	if (*string != '\0')
//	{   //�ж�string��ASCIIֵ�Ƿ�Ϊ0,��C��������'\0'��Ϊ�����ַ�
//		string++;  //һֱ������ͳ��Ԫ��
//		reverse_string(string);
//		printf("%c", *(string - 1));
//		   // string-1ָ�ַ����д����һ��Ԫ����� 
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