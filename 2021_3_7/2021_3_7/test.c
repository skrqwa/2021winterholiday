#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>


//struct Book
//{
//	//��Ա����
//	char name[20];
//	char author[20];
//	short price;
//};
//typedef struct Book
//{
//	//��Ա����
//	char name[20];
//	char author[20];
//	short price;
//}Book;
//int main()
//{
//	struct Book b1 = {"c���Գ������","̷��ǿ",55};
//	Book b2 = { "c���Գ������", "̷��ǿ", 58 };
//	printf("%s %s %d\n", b1.name, b1.author, b1.price);
//	printf("%s %s %d\n", b2.name, b2.author, b2.price);
//	return 0;
//}

//�����ṹ�����ͣ�ֻ��ʹ��һ��
//struct 
//{
//	char c;
//	int a;
//	short s;
//}s;

//struct Node
//{
//	int data;
//	struct Node n;
//};

//struct Node
//{
//	int data;//������
//	struct Node* next;//ָ����
//};

//struct S
//{
//	int a;
//	int b;
//	double d;
//};
//struct B
//{
//	char c;
//	struct S s;
//	short ss;
//};
//
//int main()
//{
//	struct B b = { 'a', { 1, 2, 3.500 }, 7 };
//	printf("%f\n", b.s.d);
//	return 0;
//}

//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
////offsetof - ������ǽṹ���Ա����ڽṹ����ʼλ�õ�ƫ����
//int main()
//{
//	struct S1 s1;
//	//printf("%d\n", sizeof(s1));
//	printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//
//	return 0;
//}

//struct S
//{
//	char c1;
//	char c2;
//	int i;
//};
//int main()
//{
//	struct S s1;
//	printf("%d\n", sizeof(s1));
//	return 0;
//}

//struct A
//{
//	//int����һ�ο���4���ֽڣ�32������λ��char���Ϳ���һ���ֽڣ�8������λ
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}
//struct S
//{
//	//int����һ�ο���4���ֽڣ�32������λ��char���Ϳ���һ���ֽڣ�8������λ
//	char _a : 3;
//	char _b : 4;
//	char _c : 5;
//	char _d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s._a = 10;
//	s._b = 12;
//	s._c = 3;
//	s._d = 4;
//
//	return 0;
//
//}
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum RGB
//{
//	RED=8,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	/*enum Sex s = FEMALE;
//	enum RGB rgb = GREEN;*/
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//
//	return 0;
//}

//union Un
//{
//	char c;//1
//	int i;//4
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;//0x 00 00 00 01
//	//��           ��
//	//01 00 00 00  -С��
//	//00 00 00 01  -���
//	return *(char*)&a;
//}
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
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
//}
//union U
//{
//	char arr[6];//6
//	int i;//4
//	//Ҫ���룬�ܴ�С�Ƕ�������������8
//};
//int main()
//{
//	union U u;
//	printf("%d\n", sizeof(u));
//}
//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//struct B
//{
//	int a;
//	short b;
//	char c;
//	int d;
//};
//typedef struct{
//	int a;
//	char b;
//	short c;
//	short d;
//}AA_t;
//int main()
//{
//	struct A a;
//	struct B b;
//	AA_t c;
//	long l;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(l));
//}
//#pragma pack(4)/*����ѡ���ʾ4�ֽڶ��� ƽ̨��VS2013�����ԣ�C����*/
//int main(int argc, char* argv[])
//{
//	struct tagTest1
//	{
//		short a;
//		char d;
//		long b;
//		long c;
//	};
//	struct tagTest2
//	{
//		long b;
//		short c;
//		char d;
//		long a;
//	};
//	struct tagTest3
//	{
//		short c;
//		long b;
//		char d;
//		long a;
//	};
//	struct tagTest1 stT1;
//	struct tagTest2 stT2;
//	struct tagTest3 stT3;
//
//	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//	return 0;
//}
//#pragma pack()

int main()
{
	union
	{
		short k;
		char i[2];
	}*s, a;
	s = &a;
	s->i[0] = 0x39;
	s->i[1] = 0x38;
	printf("%x\n", a.k);
	return 0;
}