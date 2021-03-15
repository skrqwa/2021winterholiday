#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"

void IntiContact(struct Contact* pc)
{
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));//��ַ���ı���ַ����ı���ַ���
}

void AddContact(struct Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("������������");
		scanf("%s", pc->data[pc->sz].name);
		printf("���������䣺");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("�������Ա�");
		scanf("%s", pc->data[pc->sz].sex);
		printf("������绰��");
		scanf("%s", pc->data[pc->sz].tele);
		printf("�������ַ��");
		scanf("%s", pc->data[pc->sz].addr);

		pc->sz++;
		printf("��ӳɹ���\n");
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
		printf("%-15s\t%-4s\t%-4s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		int i = 0;
		for (i = 0; i < pc->sz; i++)
		{
			printf("%-15s\t%-4d\t%-4s\t%-12s\t%-20s\n",
				pc->data[i].name,
				pc->data[i].age,
				pc->data[i].sex,
				pc->data[i].tele,
				pc->data[i].addr
				);
		}
	}
}

int FindByName(struct Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)//strcmp:�ַ�1���ַ�2������<��>��=0
			return i;
	}
	return -1;
}
void DeleteContact(struct Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		char name[NAME_MAX];
		printf("������Ҫɾ���˵����֣�");
		scanf("%s", name);
		//1.��λ
		int pos = FindByName(pc, name);
		//2.ɾ��
		if (pos == -1)
		{
			printf("ɾ�����˲����ڡ�\n");
		}
		else
		{
			int j = 0;
			for (j = 0; j < pc->sz - 1; j++)
			{
				pc->data[j] = pc->data[j + 1];
			}
			pc->sz--;
			printf("ɾ���ɹ���\n");
		}
	}
}

void SearchContact(const struct Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		char name[NAME_MAX];
		printf("������Ҫ�����˵����֣�");
		scanf("%s", name);
		//1.��λ
		int pos = FindByName(pc, name);
		//2.����
		if (pos == -1)
		{
			printf("���ҵ��˲����ڡ�\n");
		}
		else
		{
			printf("%-15s\t%-4s\t%-4s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
			printf("%-15s\t%-4d\t%-4s\t%-12s\t%-20s\n",
					pc->data[pos].name,
					pc->data[pos].age,
					pc->data[pos].sex,
					pc->data[pos].tele,
					pc->data[pos].addr
					);
		}
	}
}

void ModifyContact(struct Contact* pc)
{
	char name[NAME_MAX];
	printf("������Ҫ�޸��˵����֣�");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲����ڡ�\n");
	}
	else
	{
		printf("�������޸ĺ��������");
		scanf("%s", pc->data[pos].name);
		printf("�������޸ĺ����䣺");
		scanf("%d", &(pc->data[pos].age));
		printf("�������޸ĺ���Ա�");
		scanf("%s", pc->data[pos].sex);
		printf("�������޸ĺ�ĵ绰��");
		scanf("%s", pc->data[pos].tele);
		printf("�������޸ĺ�ĵ�ַ��");
		scanf("%s", pc->data[pos].addr);

		printf("�޸ĳɹ���\n");
	}
}