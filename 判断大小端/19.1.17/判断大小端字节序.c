#include <stdio.h>
#include <stdlib.h>

int Islittleend()
{
	int a = 0x11223344;
	char*b = (char*)&a;
	if (*b = 0x11)//����ֽ���
	{
		printf("Ϊ����ֽ���\n");//������˳��
	}
	else
	{
		printf("ΪС���ֽ���\n");//����˳��
	}
}

int main()
{
	Islittleend();
	system("pause");
	return 0;

}//�ж��ֽ��򣬸����Ƿ��ַ���׵�ַһ���жϣ���Ϊ��ͬ������ֽ���