#define _CRT_SECURE_NO_WARNINGS
//1.һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�
//
//
//�����˼·����һ�����������1�����ظ����ֵ����֣��������ֶ��ظ�����2�Σ�
//��ô�����е�ֵ�����һ�����������ظ������֡����磺{ 1��1��2��2��3��3��4 }��
//����ֵ���Ľ����4�������2�����ظ����ֵ����֣�����{ 1��1��2��2��3��3��4��5 }��
//����ֵ���Ľ����{ 4��5 }���Ľ��Ϊ1������ֻҪ���������ֵ�ֿ��ͺã�
//1.������ֵ�����һ�𣬵õ�4��5���Ľ��1
//2.�ҵ������1�Ķ������е�һ��Ϊ1��λ��
//3.�������λ�÷�Ϊ���飬�ֱ���������͵õ����յĽ��
#include <stdio.h>
#include<stdlib.h>
//#include<windows.h>
//
//void find_num(int arr[], int len)
//{
//	int i = 0;//ѭ������
//	int ret = 0;//��¼����ֵ���Ľ��
//	int pos = 0;//��¼ret������Ϊ��һ��Ϊ1��λ��
//	int x = 0;//��һ��ֵ�����x���õ�1��û����ͬ���ֵ�ֵ
//	int y = 0;//����һ��ֵ�����x���õ���1��û����ͬ���ֵ�ֵ
//	for (i = 0; i < len; i++)
//	{
//		ret ^= arr[i];
//	}//�����������ֵ���
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((ret >> i) & 1))
//		{
//			pos = i;//��i��Ϊ1
//			break;
//		}
//	}//�ҵ�ret������Ϊ��һ��Ϊ1��λ��
//	for (i = 0; i < len; i++)
//	{
//		if (1 == ((arr[i] >> pos) & 1))
//		{
//			x ^= arr[i];
//		}
//		else
//			y ^= arr[i];
//	}//�������
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
//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
//

//int main()
//{
//	int money;
//	printf("������Ǯ����\n");
//	scanf("%d", &money);
//	int drink;
//	int bottle;
//	drink = money;
//	bottle = money;
//	while (bottle >= 2)
//	{
//		drink += bottle / 2;//�ɺȵĴ���
//		bottle = bottle / 2 + bottle % 2;//ʣ��ƿ��
//	}
//	printf("�ܹ����Ժ�%dƿ��ˮ\n", drink);
//	system("pause");
//	return 0;
//}
//3.ģ��ʵ��strcpy
//char* my_strcpy(char* strdest, char* strsrc)
//{
//	if (strdest == NULL || strsrc == NULL)//�ж����ַ����Ƿ�Ϊ��
//	{
//		return NULL;
//	}
//	char *address = strdest;//����һ��strdest
//	while ((*strdest++ = *strsrc++) != '\0')//������Ƶ�strdest֮��
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
//4.ģ��ʵ��strcat
//#include<assert.h>
//char * my_strcat(char *dest, const char *src)
//{
//	//assertΪ�ж��Ƿ�Ϊ��
//	assert(dest);     //���ԣ����ַ���Ϊ�գ���ִ�к���Ĵ���
//	assert(src);      //���ԣ����ַ���Ϊ�գ���ִ�к���Ĵ���
//	char * ret = dest;
//	while (*dest)     //�ҳ�Ŀ���ַ�����'\0'��λ��
//	{
//		dest++;
//	}
//	while (*dest++ = *src++) //��Դ�ַ��������ݿ�����Ŀ���ַ�����
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char a[20] = "abcd";  //Ŀ��ռ�����㹻���ұ�����\0
//	char b[5] = "efgh";   //Դ�ַ���������\0
//	my_strcat(a, b);
//	printf("%s\n", a);
//	system("pause");
//	return 0;
//}


