#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"


void  AddContact(struct Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("通讯录已经满了，无法添加\n");
	}
	else
	{
		printf("请输入名字:\n")
	}
	
}

void ShowContact(struct Contact* pc)
{
	int i = 0;
	printf("%15s\t%5s\t%5s\t%12s\t%20s\t", "姓名", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%15s\t%5s\t%5s\t%12s\t%20s\t",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr
			);
	}
}