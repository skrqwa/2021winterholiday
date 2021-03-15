//��������
#include <stdio.h>
#include <string.h>

#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30
#define MAX 1000

//ÿ���˵�ͨѶ¼��Ϣ
struct PeoInfo
{
	char name[NAME_MAX];
	short age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};

//ͨѶ¼��¼������Ϣ����Ϣ��Ŀ
struct Contact
{
	struct PeoInfo data[MAX];
	int sz;
};

//��ʼ��ͨѶ¼
void IntiContact(struct Contact* pc);

//����ͨѶ¼��Ϣ
void AddContact(struct Contact* pc);

//��ʾͨѶ¼��Ϣ
void ShowContact(const struct Contact* pc);

//ɾ��ͨѶ¼��Ϣ
void DeleteContact(struct Contact* pc);

//����ͨѶ¼��Ϣ
void SearchContact(const struct Contact* pc);

//�޸�ͨѶ¼��Ϣ
void ModifyContact(struct Contact* pc);
