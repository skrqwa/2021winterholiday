#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
//struct tag
//{
//	char menber_list;
//}variable_list;

//struct Book
//{
//	char name[20];
//	char writer[20];
//	short price;
//};
//
//typedef struct Book
//{
//	char name[20];
//	char writer[20];
//	short price;
//}Book;
//
//int main()
//{
//	//struct Book c = { "c���Գ������", "̷��ǿ", 55 };//����ʵ��
//	Book c = { "c���Գ������", "̷��ǿ", 55 };
//	c.name;//��������
//	c.writer;//��������
//	c.price;//���ü۸�
//	return 0;
//}
//
//struct S
//{
//	char c1;
//	char c2;
//	int i;
//	
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}
//struct S
//{
//	int data[1000];
//	int number;
//};
//struct S s = { { 1, 2, 3, 4 }, 1000 };
//
////�ṹ�崫��
//void print1(struct S a)
//{
//	printf("%d\n", a.number);
//}
//
////�ṹ���ַ����
//void print2(struct S* p)
//{
//	printf("%d\n", p->number);
//}
//int main()
//{
//	print1(s);
//	print2(&s);
//	return 0;
//}
//enum Day
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//enum RGB
//{
//	RED = 1,
//	GREEN = 2,
//	BLUE = 5
//};
//
//int main()
//{
//	enum Day d = Mon;
//}

//union Un
//{
//	//����һ���洢�ռ�
//	char c; //4���ֽ�
//	int i; //1���ֽ�
//};
//int main()
//{
//	union Un u;
//	u.i = 0x11223344;
//	u.c = 0x55;
//	printf("%x\n", u.i);
//}

//��˴洢�����ǰ�һ�����ĵ�λ�ֽ�������ݴ�ŵ��ߵ�ַ������λ�ֽ�������ݴ���ڵ͵�ַ����
//С�˴洢�����ǰ�һ�����ĵ�λ�ֽ�������ݴ�ŵ��͵�ַ������λ�ֽ�������ݴ���ڸߵ�ַ����

//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;//����0Ϊ��ˣ�����1ΪС��
//	//�͵�ַ      �ߵ�ַ
//	//00 00 00 01  ���
//	//01 00 00 00  С��
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//union Un
//{
//	short arr[7];
//	int i;
//}u;
//int main()
//{
//	printf("%d\n", sizeof(u));
//	return 0;
//}
//int main()
//{
//	char a;
//	while (scanf("%c", &a) != EOF)
//	{
//		
//	}
//}
//#include <stdio.h>
//int main()
//{
//	char ch = '0';
//	while ((ch = getchar())!= EOF)
//	{
//		if ('a'<=ch && ch<='z')
//		{
//			ch = ch - 32;
//			putchar(ch);
//			//printf("%c\n", ch);
//			
//		}
//		else if ('A'<ch && ch<'Z')
//		{
//			ch = ch + 32;
//			putchar(ch);
//			//printf("%c\n", ch);
//			
//		}
//	}
//	
//}
//#include<stdio.h>
//int main()
//{
//	char arr = '0';
//	while (scanf("%c", &arr) != EOF)
//	{
//		if (arr == '\n')
//			continue;
//		if (arr >= 'A' && arr <= 'Z')
//		{
//			printf("%c\n", arr + 32);
//		}
//		else if (arr >= 'a' && arr <= 'z')
//		{
//			printf("%c\n", arr - 32);
//		}
//		else
//			printf("%c\n", arr);
//
//	}
//
//	return 0;
//}
#include <stdio.h>
#include <time.h>//time()��������Ҫ��ͷ�ļ� 
#include <stdlib.h>//srand��rand����Ҫ��ͷ�ļ�
int main()
{
	int num = 0;
	int input = 0;
	srand((unsigned int)time(NULL));
	num = rand() % 100;//����1��99������� 
	printf("��²������������,��100����Ŷ->>\n");
	while((scanf("%d",&input))!=EOF)
	{
		if (input > num)
		{
			printf("�´��ˣ������Կ�\n");
		}
		else if (input < num)
		{
			printf("��С�ˣ������Կ�\n");
		}
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
	}

	return 0;
}
