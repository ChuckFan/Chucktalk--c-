#define _CRT_SECURE_NO_WARNINGS

//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

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
//	printf("请输入一组数组\n");
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