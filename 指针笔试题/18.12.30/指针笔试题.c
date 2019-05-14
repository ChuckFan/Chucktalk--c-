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

	//printf("%d\n", strlen(arr)); //未定义
	//printf("%d\n", strlen(arr + 0));//未定义
	//printf("%d\n", strlen(*arr));//未定义
	//printf("%d\n", strlen(arr[1]));//同上
	//printf("%d\n", strlen(&arr)); 
	//printf("%d\n", strlen(&arr + 1));
	//printf("%d\n", strlen(&arr[0] + 1));




	//char arr[] = "abcdef"; 
	//printf("%d\n", sizeof(arr));//7
	//printf("%d\n", sizeof(arr + 0)); //4
	//printf("%d\n", sizeof(*arr));//1,解引用，首元素地址
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
	//printf("%d\n", sizeof(p));//4,p为指针代表字符串地址，若定义时字符串前有&则代表p为字符串本身
	//printf("%d\n", sizeof(p + 1)); //4，指针
	//printf("%d\n", sizeof(*p)); //1，首元素
	//printf("%d\n", sizeof(p[0]));//1，同上
	//printf("%d\n", sizeof(&p));//4，指针解引用
	//printf("%d\n", sizeof(&p + 1));//4，解引用加减仍为指针
	//printf("%d\n", sizeof(&p[0] + 1));//4，同上





	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//48
	//printf("%d\n", sizeof(a[0][0]));//4
	//printf("%d\n", sizeof(a[0])); //16
	//printf("%d\n", sizeof(a[0] + 1));//4数组加一变指针
	//printf("%d\n", sizeof(*(a[0] + 1)));//4运用*（p+1）=p[1],所以*(a[0] + 1)=>a[0][1]
	//printf("%d\n", sizeof(a + 1));//4
	//printf("%d\n", sizeof(*(a + 1)));//16
	//printf("%d\n", sizeof(&a[0] + 1));//4
	//printf("%d\n", sizeof(*(&a[0] + 1)));//4=>(&a[0])[1]=>(&a[0])[1]
	////&a[0]是指向第一排四个元素的数组指针，[1]则表示具体元素
	//printf("%d\n", sizeof(*a));//16  *(a+0)=>a[0]
	//printf("%d\n", sizeof(a[3]));//16  编译期不存在越界
	/*int a[5] = { 1, 2, 3, 4, 5 };
	int *ptr = (int *)(&a + 1); 
	printf("%d,%d", *(a + 1), *(ptr - 1)); */
	system("pause");
	//2,5
	
}
