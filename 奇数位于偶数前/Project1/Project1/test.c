#define _CRT_SECURE_NO_WARNINGS

//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

//void Swag(int str[], int len)
//{
//	int i, j;
//	for (i = 0; i < len; i++)
//	{
//		if ((str[i] % 2 )==0)
//			for (j = i + 1; j < len; j++)
//			{
//				int temp;
//				if ((str[j] % 2) == 1)
//				{
//					temp = str[i];
//					str[i] = str[j];
//					str[j] = temp;
//					break;
//				}	
//			}
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int i, j;
//	/*int arr[] = { 0 };
//	printf("������һ������\n");
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		scanf("%d", &arr[i]);
//	}*/
//	Swag(arr, sizeof(arr) / sizeof(arr[0]));
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d", arr[i]);
//	}
//	system("pause");
//	return 0;
//}