#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <limits.h>

//int my_atoi(const char* str)
//{
//	int flag = 1;
//	int num = 0;
//	if (str == NULL)
//	{
//		printf("string is NULL!\n");
//		return 0;
//	}
//	else
//	{
//		while(isspace(*str))
//		{
//			str++;
//		}
//		if (*str == '+')
//		{
//			str++;
//		}
//		else if (*str == '-')
//		{
//			flag = -1;
//			str++;
//		}
//		while (*str)
//		{
//			while (isspace(*str))
//			{
//				str++;
//			}
//			    num = num * 10 + flag*(*str - '0');
//				str++;
//		}
//		return num;
//	}
//
//}
//int main()
//{
//	char* c = "-123456";
//	int tmp = my_atoi(c);
//	printf("%d\n", tmp);
//	return 0;
//}
