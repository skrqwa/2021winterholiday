#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//ָ���������������
//1.ָ������
//int main()
//{
//	int a = 0x11233554;
//
//	int* pa = &a;//��pa�Ľ����ò���������4���ֽ�
//	*pa = 0;
//
//	char* pc = &a;//��pc�Ľ����ò���������1���ֽ�
//	*pc = 0;
//}

//int main()
//{
//	int a = 0x11233554;
//
//	int* pa = &a;//��pa�Ľ����ò���������4���ֽ�
//	char* pc = &a;//��pc�Ľ����ò���������1���ֽ�
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	
//}

//int main()
//{
//	float f = 0.0879;
//	printf("%f\n", f);
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	char *ps = "abcdef";
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int * pa = &a;
//	
//
//	int arr[10] = { 1, 2, 3, 4, 5 };
//	printf("%p\n", arr);//������ - ��Ԫ�صĵ�ַ
//	printf("%p\n", &arr);//�õ���������ĵ�ַ
//	int(*p2)[10] = &arr;//p2����һ������ĵ�ַ
//
//	arr + 1;//������Ԫ�صĵ�ַ+1����������һ��Ԫ��
//	&arr + 1;//�����ַ+1����������һ������
//
//	return 0;
//}

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
//
//int main()
//{
//	struct Book b1 = { "c���Գ������", "̷��ǿ", 55 };
//	Book b2 = { "c���Գ������", "̷��", 88 };
//	//printf("%s %s %d\n", b1.name, b1.author, b1.price);
//
//	printf("%s %s %d\n", b2.name, b2.author, b2.price);
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);
//		
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//
//	}
//	return 0;
//}
bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int i = 0;
	int arr[10] = { 1,8,7,6,10,4,5,2,3,9 };
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}