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

//ͨѶ¼�Ľṹ��
struct Contact
{
	struct PeoInfo data[MAX];//���1000����Ϣ�ռ�
	int sz;//��ʾͨѶ¼�е�ǰ��ŵ���Ϣ��
};

//����������
//��ʼ��ͨѶ¼
void InitContact(struct Contact* pc);

//����ͨѶ¼
void AddContact(struct Contact* pc);

//��ʾͨѶ¼
void ShowContact(struct Contact* pc);

//ɾ��ͨѶ¼
void DelContact(struct Contact* pc);