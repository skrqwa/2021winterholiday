#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"

//дһ��ͨѶ¼
//���Ա���1000���˵���Ϣ
//ÿ���˵���Ϣ
//����
//����
//�Ա�
//�绰
//��ַ
//���ܣ�
//1.����һ���˵���Ϣ
//2.ɾ��һ��ָ������ϵ��
//3.����һ��ָ������ϵ��
//4.�޸�һ��ָ������ϵ��
//5.��ʾͨѶ¼�������˵���Ϣ
//6.����
//0.�˳�
//

void menu()
{
	printf("****************************************\n");
	printf("*****   1.add      2. del     **********\n"); 
	printf("*****   3.search   4.modify   **********\n");
	printf("*****   5.show     6.sort     **********\n");
	printf("*****   0.exit                **********\n");
	printf("****************************************\n");
}
enum option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
void test()
{
	int input = 0;
	struct Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch(input)
		{
			case ADD:
				AddContact(&con);
				break;
			case DEL:
				DelContact(&con);
				break;
			case SEARCH:
				SearchContact(&con);
				break;
			case MODIFY:
				ModifychContact(&con);
				break;
			case SHOW:
				ShowContact(&con);
				break;
			case EXIT:
				printf("�˳�ͨѶ¼\n");
				break;
			case SORT:
				break;
			
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}