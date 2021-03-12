#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 12
#define MAX 1000

struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};

//通讯录的结构体
struct Contact
{
	struct PeoInfo data[MAX];//存放1000人信息空间
	int sz;//表示通讯录中当前存放的信息数
};

//函数的声明
//初始化通讯录
void InitContact(struct Contact* pc);

//增加通讯录
void AddContact(struct Contact* pc);

//显示通讯录
void ShowContact(struct Contact* pc);

//删除通讯录
void DelContact(struct Contact* pc);