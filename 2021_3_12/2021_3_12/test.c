#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"

//写一个通讯录
//可以保存1000个人的信息
//每个人的信息
//名字
//年龄
//性别
//电话
//地址
//功能：
//1.增加一个人的信息
//2.删除一个指定的联系人
//3.查找一个指定的联系人
//4.修改一个指定的联系人
//5.显示通讯录中所有人的信息
//6.排序
//0.退出
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
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择：");
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
				printf("退出通讯录\n");
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