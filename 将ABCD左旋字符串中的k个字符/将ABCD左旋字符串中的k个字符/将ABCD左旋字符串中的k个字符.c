//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
int is_rotate(char *str1, char *str2)            //判断字符串是否相等函数
{
	if (strcmp(str1, str2) == 0)
		return 1;
	else
		return 0;
}
//左移和右移分别判断，合在一起包含了所有旋转会出现的情况
int right_rotate (char*str1, char *str2,int sz)      //右旋函数
{
	  int i=0;
	  int p=sz;
	  int ret=0;
	  while (p--)               //以字符串长度进行右旋转
   	{  
	  char temp=str2[sz-1];     //把最后一个字符串每次先保存下来
	  for (i=sz-1;i>0;i--)
	  {
		  str2[i]=str2[i-1];          //使字符串依次后移
	  }
	  str2[i]=temp;            //把保存的内容赋给前边空了的下标中
	  ret=is_rotate (str1,str2);   //调用字符串，每次旋转后进行比较
	  if (ret)                     //如果相等就返回1，否则返回0
	  break;
	}
	  return ret;
}
int left_rotate(char* str1, char *str2, int sz)   //左旋函数
{
	int p = sz;
	int i = 0;
	int ret = 0;
	while (p--)
	{
		char temp = str2[0];          //把首字符串每次先保存下来
		for (i = 0; i<sz - 1; i++)
		{
			str2[i] = str2[i + 1];       //使字符串依次前移
		}
		str2[i] = temp;           //把保存的内容赋给后边空了的下标中
		ret = is_rotate(str1, str2);       //调用字符串，每次旋转后进行比较
		if (ret)
			break;
	}
	return ret;
}
int main()
{
	int ret1;
	int ret2;
	char string1[] = "ABCDE";
	char string2[] = "ABCED";
	ret1 = left_rotate(string1, string2, (sizeof string2 / sizeof string2[0] - 1));
	printf ("%d\n",ret1);//左旋判断结果
	ret2=right_rotate (string1,string2,(sizeof string1/sizeof string1[0]-1));
	printf ("%d\n",ret2);//右旋判断结果
	if (ret1)
		printf("字符串str2是经过字符串str1旋转的\n");
	else
		printf("字符串str2不是经过字符串str1旋转的\n");
	if (ret2)
	printf("字符串str2是经过字符串str1旋转的\n");
	else
	printf("字符串str2不是经过字符串str1旋转的\n");
	system("pause");
	return 0;

}







