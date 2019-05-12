#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h.>
#include<stdlib.h>
int main()
{
	for (int i = 0; i < 3; ++i)
	{
		char password[100] = { 0 };
		printf("ÇëÊäÈëÃÜÂë£º\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("ÃÜÂëÕýÈ·\n");
			system("pause");
			break;
		}
		else
		{
			printf("ÃÜÂë´íÎó\n");
		}
	}
		return 0;
		
}