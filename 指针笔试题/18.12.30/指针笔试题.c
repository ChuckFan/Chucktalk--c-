#include<stdio.h.>
#include<stdlib.h>
int main()
{
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a));//16
	//printf("%d\n", sizeof(a + 0));//4
	///printf("%d\n", sizeof(*a));//4
	//printf("%d\n", sizeof(a + 1));//4
	//printf("%d\n", sizeof(a[1]));//4
	///printf("%d\n", sizeof(&a));//4
	//printf("%d\n", sizeof(*&a));//16
	//printf("%d\n", sizeof(&a + 1));//4
	//printf("%d\n", sizeof(&a[0]));//4
	//printf("%d\n", sizeof(&a[0] + 1))//4;



	//int a[] = { 1, 2, 3, 4 };
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr + 0));//4
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4
	//printf("%d\n", sizeof(&arr + 1));//4
	//printf("%d\n", sizeof(&arr[0] + 1));//4

	//printf("%d\n", strlen(arr)); //δ����
	//printf("%d\n", strlen(arr + 0));//δ����
	//printf("%d\n", strlen(*arr));//δ����
	//printf("%d\n", strlen(arr[1]));//ͬ��
	//printf("%d\n", strlen(&arr)); 
	//printf("%d\n", strlen(&arr + 1));
	//printf("%d\n", strlen(&arr[0] + 1));




	//char arr[] = "abcdef"; 
	//printf("%d\n", sizeof(arr));//7
	//printf("%d\n", sizeof(arr + 0)); //4
	//printf("%d\n", sizeof(*arr));//1,�����ã���Ԫ�ص�ַ
	//printf("%d\n", sizeof(arr[1]));1
	//printf("%d\n", sizeof(&arr)); //4
	//printf("%d\n", sizeof(&arr + 1));//4
	//printf("%d\n", sizeof(&arr[0] + 1));//4

	//printf("%d\n", strlen(arr)); //6
	//printf("%d\n", strlen(arr + 0));//6
	//printf("%d\n", strlen(*arr)); //
	//printf("%d\n", strlen(arr[1])); //
	//printf("%d\n", strlen(&arr));//
	//printf("%d\n", strlen(&arr + 1));//
	//printf("%d\n", strlen(&arr[0] + 1));//




	//char *p = "abcdef";
	//printf("%d\n", sizeof(p));//4,pΪָ������ַ�����ַ��������ʱ�ַ���ǰ��&�����pΪ�ַ�������
	//printf("%d\n", sizeof(p + 1)); //4��ָ��
	//printf("%d\n", sizeof(*p)); //1����Ԫ��
	//printf("%d\n", sizeof(p[0]));//1��ͬ��
	//printf("%d\n", sizeof(&p));//4��ָ�������
	//printf("%d\n", sizeof(&p + 1));//4�������üӼ���Ϊָ��
	//printf("%d\n", sizeof(&p[0] + 1));//4��ͬ��





	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//48
	//printf("%d\n", sizeof(a[0][0]));//4
	//printf("%d\n", sizeof(a[0])); //16
	//printf("%d\n", sizeof(a[0] + 1));//4�����һ��ָ��
	//printf("%d\n", sizeof(*(a[0] + 1)));//4����*��p+1��=p[1],����*(a[0] + 1)=>a[0][1]
	//printf("%d\n", sizeof(a + 1));//4
	//printf("%d\n", sizeof(*(a + 1)));//16
	//printf("%d\n", sizeof(&a[0] + 1));//4
	//printf("%d\n", sizeof(*(&a[0] + 1)));//4=>(&a[0])[1]=>(&a[0])[1]
	////&a[0]��ָ���һ���ĸ�Ԫ�ص�����ָ�룬[1]���ʾ����Ԫ��
	//printf("%d\n", sizeof(*a));//16  *(a+0)=>a[0]
	//printf("%d\n", sizeof(a[3]));//16  �����ڲ�����Խ��
	/*int a[5] = { 1, 2, 3, 4, 5 };
	int *ptr = (int *)(&a + 1); 
	printf("%d,%d", *(a + 1), *(ptr - 1)); */
	system("pause");
	//2,5
	
}
