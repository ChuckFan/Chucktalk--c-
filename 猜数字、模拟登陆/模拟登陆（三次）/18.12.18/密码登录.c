#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h.>
#include<stdlib.h>
int main()
{
	for (int i = 0; i < 3; ++i)
	{
		char password[100] = { 0 };
		printf("���������룺\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("������ȷ\n");
			system("pause");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
		return 0;
		
}