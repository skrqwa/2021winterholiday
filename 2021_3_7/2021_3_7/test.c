#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>


//struct Book
//{
//	//成员变量
//	char name[20];
//	char author[20];
//	short price;
//};
//typedef struct Book
//{
//	//成员变量
//	char name[20];
//	char author[20];
//	short price;
//}Book;
//int main()
//{
//	struct Book b1 = {"c语言程序设计","谭浩强",55};
//	Book b2 = { "c语言程序设计", "谭浩强", 58 };
//	printf("%s %s %d\n", b1.name, b1.author, b1.price);
//	printf("%s %s %d\n", b2.name, b2.author, b2.price);
//	return 0;
//}

//匿名结构体类型；只能使用一次
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
//	int data;//数据域
//	struct Node* next;//指针域
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
////offsetof - 计算的是结构体成员相对于结构体起始位置的偏移量
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
//	//int类型一次开辟4个字节，32个比特位；char类型开辟一个字节，8个比特位
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
//	//int类型一次开辟4个字节，32个比特位；char类型开辟一个字节，8个比特位
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
//	//低           高
//	//01 00 00 00  -小端
//	//00 00 00 01  -大端
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
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//}
union U
{
	char arr[6];//6
	int i;//4
	//要对齐，总大小是对齐数的整数倍8
};
int main()
{
	union U u;
	printf("%d\n", sizeof(u));
}