#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"
//写一个通讯录
//通讯录包含以下信息
//姓名、年龄、性别、电话、地址
//通讯录功能：
//0.退出通讯录
//1.增加信息
//2.删除信息
//3.查找信息
//4.修改信息
//5.显示信息
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
	IntiContact(&con);//初始化通讯录
	do
	{
		meun();
		printf("请选择：");
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
			printf("退出通讯录\n");
			break;
		}
	} while (input);
	
}
int main()
{
	test();
	return 0;

}