#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"

void InitContact(struct Contact* pc)
{
	pc->sz = 0;
	//memset - �����ڴ��
	memset(pc->data, 0, sizeof(pc->data));
}

void AddContact(struct Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼�������޷�����\n");
	}
	else
	{
		printf("���������֣�");
		scanf("%s", pc->data[pc->sz].name);//ԭ�������ǿյģ�������ֵ�����ʼ��ֵ��name�����飬�����ǵ�ַ
		printf("���������䣺");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("�������Ա�");
		scanf("%s", pc->data[pc->sz].sex);
		printf("������绰��");
		scanf("%s", pc->data[pc->sz].tele);
		printf("�������ַ��");
		scanf("%s", pc->data[pc->sz].addr);

		pc->sz++;
		printf("���ӳɹ�\n");
	}
}

void ShowContact(const struct Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-10s\t%-4s\t%-4s\t%-12s\t%-20s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");//%4s����ռ4���ַ����Ҷ��룬-4s�������
		for (i = 0; i < pc->sz; i++)
		{
			printf("%-10s\t%-4d\t%-4s\t%-12s\t%-20s\t\n",
				pc->data[i].name,
				pc->data[i].age,
				pc->data[i].sex,
				pc->data[i].tele,
				pc->data[i].addr
				);
		}
	}

}
int FindByName(const struct Contact* pc, char name[])//name����һ�����ַ�����
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	//û�ҵ�
	return -1;
}
void DelContact(struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
	}
	else
	{
		//1.�ҵ�Ҫɾ������
		printf("������Ҫɾ���˵����֣�");
		scanf("%s", name);
		int pos = FindByName(pc, name);
		if (pos == -1)
		{
			printf("Ҫɾ�����˲�����\n");
		}
		else
		{
			//2.ɾ��
			int j = 0;
			for (j = pos; j < pc->sz-1 ; j++)
			{
				pc->data[j] = pc->data[j + 1];
			}

			pc->sz--;
			printf("ɾ���ɹ�\n");
		}
		


	}
}

void SearchContact(const struct Contact* pc)
{
	char name[NAME_MAX];
	printf("������Ҫ�����˵����֣�");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");

	}
	else
	{
		printf("%-10s\t%-4s\t%-4s\t%-12s\t%-20s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");//%4s����ռ4���ַ����Ҷ��룬-4s�������
		printf("%-10s\t%-4d\t%-4s\t%-12s\t%-20s\t\n",
				pc->data[pos].name,
				pc->data[pos].age,
				pc->data[pos].sex,
				pc->data[pos].tele,
				pc->data[pos].addr
				);
		
	}
}
void ModifychContact(struct Contact* pc)
{
	char name[NAME_MAX];
	printf("������Ҫ�޸��˵����֣�");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");

	}
	else
	{
		printf("�������޸ĺ�����֣�");
		scanf("%s", pc->data[pos].name);//ԭ�������ǿյģ�������ֵ�����ʼ��ֵ��name�����飬�����ǵ�ַ
		printf("�������޸ĺ�����䣺");
		scanf("%d", &(pc->data[pos].age));
		printf("�������޸ĺ���Ա�");
		scanf("%s", pc->data[pos].sex);
		printf("�������޸ĺ�ĵ绰��");
		scanf("%s", pc->data[pos].tele);
		printf("�������޸ĺ�ĵ�ַ��");
		scanf("%s", pc->data[pos].addr);

		
		printf("�޸ĳɹ�\n");
	}
}