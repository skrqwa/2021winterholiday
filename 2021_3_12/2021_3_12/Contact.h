//��������
#include <stdio.h>
#include <string.h>

#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30
#define MAX 1000

//����һ������Ϣ�Ľṹ��
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
	struct PeoInfo data[MAX];//����˵���Ϣ�Ŀռ�
	int sz;//��ʾͨѶ¼�е�ǰ��ŵ��˵���Ϣ����
};

//����������
//��ʼ��ͨѶ¼����
void InitContact(struct Contact* pc);

//������Ϣ����
void AddContact(struct Contact* pc);

//��ʾͨѶ¼��Ϣ
void ShowContact(const struct Contact* pc);//ֻ��ʾ���޸�

//ɾ��ͨѶ¼��Ϣ
void DelContact(struct Contact* pc);


//����ͨѶ¼��Ϣ
void SearchContact(const struct Contact* pc);

//�޸�ͨѶ¼��Ϣ
void ModifychContact(struct Contact* pc);

