//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
//
void find_killer()
{
	int killer;
	for (killer = 1; killer <= 4; killer++)
	{
		if ((killer != 1) + (killer == 3) + (killer == 4) + (killer != 4) == 3)//��Ŀ����
		{
			printf("killer=%c\n", killer + 64);//��ÿ���˶�Ӧ������ӳ�����ĸ����ASCII+64
		}
	}

}
int main()
{
	find_killer();
	system("pause");
	return 0;
}