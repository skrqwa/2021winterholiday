#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	//; ���ַ���
//	//�ַ�����
//	char arr1[] = "abc";//�ַ�����ĩβ��һ��\0��'\0'���ַ����Ľ�����־
//	char arr2[] = { 'a', 'b', 'c','\0' };
//	//strlen = string length - �ַ�������
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}

//int main()
//{
//	printf("c:\test\test.c\n");
//	//ת���ַ� - ����ת��ԭ������˼
//	// "\t"����һ��ת���ַ�
//
//
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("���ÿ��ú�ѧϰ�� ��ѡ�� 1 or 0����>");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("���ס������õ��õ�offer�����������۷�\n");
//
//	}
//	else
//	{
//		printf("�������ؼ�����\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	// int arr[10] = {1,2,3}ʣ��7��Ԫ��Ĭ����0
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for ( i = 0; i <10; i++)
//	{
//		printf("%d\n", arr[i]);
//
//	}
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("%d %d", a/b, a%b);
	return 0;
}