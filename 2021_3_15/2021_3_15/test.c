#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//float Bubble_sort(int* input, int sz)
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	for (j = 0; j < sz - 1; j++)
//	{
//		for (i = 0; i<sz - 1; i++)
//		{
//			if (input[i]>input[i + 1])
//			{
//				int tmp = input[i];
//				input[i] = input[i + 1];
//				input[i + 1] = tmp;
//			}
//			n++;
//	}
//	
//		
//	}
//	float sum = 0;
//	int len = 0;
//	for (i = 1; i<sz - 1; i++)
//	{
//		sum += input[i];
//		len++;
//	}
//	float ret = sum / len;
//	return ret;
//}
//int main()
//{
//	int input[7] = { 0 };
//	int sz = sizeof(input) / sizeof(input[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &input[i]);
//	}
//	float ret = Bubble_sort(input, sz);
//
//	printf("%.2f\n", ret);
//	return 0;
//}

////ʵ��һ���������ж�һ�����ǲ���������
////��������ʵ�ֵĺ�����ӡ100��200֮���������
//int is_primenumber(int num)
//{
//	int flag = 1;//������
//	for (size_t i = 2; i <sqrt(num); i++)
//	{
//		if (num%i == 0)
//		{
//			flag = 0;
//			return flag;
//		}
//		
//	}
//	return flag;
//}
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		int ret = is_primenumber(i);
//		if (ret == 1)
//		{
//			printf("%d \n", i);
//		}
//	}
//	return 0;
//}

////ʵ�ֺ����ж�year�ǲ������ꡣ
//void isLeapYear(int year)
//{
//	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//}
//int main()
//{
//	isLeapYear(2000);
//	return 0;
//}

////ʵ��һ�������������������������ݡ�
//void swap_int(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��%d %d\n", a, b);
//	swap_int(&a, &b);
//	printf("������%d %d\n", a, b);
//	return 0;
//}

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

void mul_table(int n)
{
	int i = 0;
	
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%2d*%-2d=%-3d ", i, j, i*j);
			
		}
		printf("\n");
	}
}
int main()
{
	mul_table(12);
	return 0;
}