#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"
//дһ��ͨѶ¼
//ͨѶ¼����������Ϣ
//���������䡢�Ա𡢵绰����ַ
//ͨѶ¼���ܣ�
//0.�˳�ͨѶ¼
//1.������Ϣ
//2.ɾ����Ϣ
//3.������Ϣ
//4.�޸���Ϣ
//5.��ʾ��Ϣ
//

void meun()
{
	printf("*****************************************\n");
	printf("******  1.add      2.delete   ***********\n");
	printf("******  3.search   4.modify   ***********\n");
	printf("******  5.show     0.exit     ***********\n");
	printf("*****************************************\n");
}

enum Option
{
	EXIT,
	ADD,
	DELETE,
	SEARCH,
	MODIFY,
	SHOW
};

void test()
{
	int input = 0;
	struct Contact con;
	IntiContact(&con);//��ʼ��ͨѶ¼
	do
	{
		meun();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DELETE:
			DeleteContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case EXIT:
			printf("�˳�ͨѶ¼\n");
			break;
		}
	} while (input);
	
}
int main()
{
	test();
	return 0;

}