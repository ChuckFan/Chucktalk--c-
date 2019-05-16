//2.
////杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//#define ROW 4
//#define COL 4
//#include<stdio.h>
//#include<stdlib.h>
//int Yang(int arr[ROW][COL], int val)
//{
//	int i = 0;
//	int j = COL - 1;
//	int tmp = arr[i][j];
//	while (1)
//	{
//		if (tmp == val)
//		{
//			return 1;
//		}
//		else if (tmp < val && j >= 0)
//		{
//			tmp = arr[++i][j];
//		}
//		else if (tmp > val &&j >= 0)
//		{
//			tmp = arr[i][--j];
//		}
//		else
//		{
//			return 0;
//		}
//	}
//
//}
//int main()
//{
//	int a[ROW][COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
//	int i = 0;
//	int j = 0;
//	int num;
//	printf("数组为:\n");
//	for (i = 0; i<ROW; i++)
//	{
//		for (j = 0; j < COL; j++);//从右上角开始往下一列完了后再向左一列，从第一行向下查找
//		{
//			printf("%5d", a[i][j]);
//		}
//		printf("\n");
//	}
//	printf("Please Enter:");
//	scanf("%d", &num);
//	if (Yang(a, num))
//	{
//		printf("%d在该数组中\n", num);
//	}
//	else
//	{
//		printf("%d不在该数组中\n", num);
//	}
//	system("pause");
//	return 0;
//}