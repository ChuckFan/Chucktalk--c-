#include <stdio.h>
#include <stdlib.h>

int Islittleend()
{
	int a = 0x11223344;
	char*b = (char*)&a;
	if (*b = 0x11)//大端字节序
	{
		printf("为大端字节序\n");//按正常顺序
	}
	else
	{
		printf("为小端字节序\n");//反向顺序
	}
}

int main()
{
	Islittleend();
	system("pause");
	return 0;

}//判断字节序，根据是否地址与首地址一致判断，此为相同（大端字节序）