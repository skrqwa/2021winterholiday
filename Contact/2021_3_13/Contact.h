//声明函数
#include <stdio.h>
#include <string.h>

#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30
#define MAX 1000

//每个人的通讯录信息
struct PeoInfo
{
	char name[NAME_MAX];
	short age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};

//通讯录记录个人信息和信息数目
struct Contact
{
	struct PeoInfo data[MAX];
	int sz;
};

//初始化通讯录
void IntiContact(struct Contact* pc);

//增加通讯录信息
void AddContact(struct Contact* pc);

//显示通讯录信息
void ShowContact(const struct Contact* pc);

//删除通讯录信息
void DeleteContact(struct Contact* pc);

//查找通讯录信息
void SearchContact(const struct Contact* pc);

//修改通讯录信息
void ModifyContact(struct Contact* pc);
