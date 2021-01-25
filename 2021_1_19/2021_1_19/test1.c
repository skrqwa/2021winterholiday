#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	//; 空字符串
//	//字符组中
//	char arr1[] = "abc";//字符串的末尾有一个\0，'\0'是字符串的结束标志
//	char arr2[] = { 'a', 'b', 'c','\0' };
//	//strlen = string length - 字符串长度
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}

//int main()
//{
//	printf("c:\test\test.c\n");
//	//转义字符 - 就是转变原来的意思
//	// "\t"就是一个转义字符
//
//
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("你会每天好好学习吗？ （选择 1 or 0）：>");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("坚持住，你会拿到好的offer，走上人生巅峰\n");
//
//	}
//	else
//	{
//		printf("放弃，回家种田\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	// int arr[10] = {1,2,3}剩下7个元素默认是0
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