//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//
void find_killer()
{
	int killer;
	for (killer = 1; killer <= 4; killer++)
	{
		if ((killer != 1) + (killer == 3) + (killer == 4) + (killer != 4) == 3)//题目条件
		{
			printf("killer=%c\n", killer + 64);//将每个人对应的数字映射成字母，即ASCII+64
		}
	}

}
int main()
{
	find_killer();
	system("pause");
	return 0;
}