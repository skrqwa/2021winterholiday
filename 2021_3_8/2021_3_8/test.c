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
//	//struct Book c = { "c语言程序设计", "谭浩强", 55 };//创建实例
//	Book c = { "c语言程序设计", "谭浩强", 55 };
//	c.name;//调用书名
//	c.writer;//调用作者
//	c.price;//调用价格
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
////结构体传参
//void print1(struct S a)
//{
//	printf("%d\n", a.number);
//}
//
////结构体地址传参
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
//	//公用一个存储空间
//	char c; //4个字节
//	int i; //1个字节
//};
//int main()
//{
//	union Un u;
//	u.i = 0x11223344;
//	u.c = 0x55;
//	printf("%x\n", u.i);
//}

//大端存储：就是把一个数的低位字节序的内容存放到高地址处，高位字节序的内容存放在低地址处。
//小端存储：就是把一个数的低位字节序的内容存放到低地址处，高位字节序的内容存放在高地址处。

//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;//返回0为大端，返回1为小端
//	//低地址      高地址
//	//00 00 00 01  大端
//	//01 00 00 00  小端
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
#include <time.h>//time()函数所需要的头文件 
#include <stdlib.h>//srand和rand所需要的头文件
int main()
{
	int num = 0;
	int input = 0;
	srand((unsigned int)time(NULL));
	num = rand() % 100;//生成1到99的随机数 
	printf("请猜猜我心里想的数,在100以内哦->>\n");
	while((scanf("%d",&input))!=EOF)
	{
		if (input > num)
		{
			printf("猜大了，再试试看\n");
		}
		else if (input < num)
		{
			printf("猜小了，再试试看\n");
		}
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}

	return 0;
}
