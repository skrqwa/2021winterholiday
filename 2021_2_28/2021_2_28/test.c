#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>


//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[40] = "jjkkll";
//	char arr3[40] = "xxxxxxxx";
//	strcpy(arr2, arr1);
//	strcpy(arr3, "hehehehh");
//	printf("arr1: %s\narr2: %s\narr3:%s \n", arr1, arr2, arr3);
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//�Զ��庯��
//��������ֵ���� ������ ��������
//int get_max(int a, int b)
//{
//	return (a > b) ?(a) : (b);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//д����������a��b��ֵ
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��       a=%d  b=%d\n", a, b);
//	Swap1(a, b);
//	printf("Swap1������a=%d  b=%d\n", a, b);
//	Swap2(&a, &b);
//	printf("Swap2������  a=%d  b=%d\n", a, b);
//	return 0;
//}

//�ݹ�
//int is_prime(int i)
//{
//	int j = 0;
//	int flag = 1;
//	for (j = 2; j < sqrt(i); j++)
//	{
//		if (i%j == 0)
//		{
//			flag = 0;
//			break;
//			
//		}
//	}
//	return flag;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//}

//���ֲ���
//int search_arr(int arr[], int k, int sz)
//{
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right-left) / 2;
//		if (k < arr[mid])
//		{
//			right = mid - 1;//���kС���м�ֵ����ôk�����ߣ���ʱ�ұ߽���С��mid-��
//		}
//		else if (k>arr[mid])
//		{
//			left = mid + 1;//���k�����м�ֵ����ô�����Ұ�ߣ���ʱ��߽����ӵ�mid-1��
//		}
//		else
//		{
//			return mid;//k=arr[mid]ʱ���ҵ���
//		}
//	}
//	if (left > right)//���ָ��ֵ���������ڣ���ô����left��һֱ���ӵ�10����rightһֱ��9���ֲ��䣬���Ի�����ѭ�������������ж����
//	{
//		return -1;
//	}
//	
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 10;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ĵ�С����һ��Ԫ�صĴ�С��������ĳ���
//	int ret = search_arr(arr, k, sz);
//	if (ret!=-1)
//	{
//		printf("���ҵ�Ԫ��Ϊ��%d���±��ǣ�%d\n", k, ret);
//	}
//	else
//	{
//		printf("����ʧ��/n");
//	}
//	
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		if (i = 5)//��Ϊ�����Ǹ�ֵ�����Գ���ִ�е�����i=5�ˣ���һֱ��ѭ��
//			printf("%d ", i);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//���������������Ӵ�С����
//void sort(int a, int  b, int c)
//{
//	int tmp = 0;
//	if (b > a)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (c > a)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (c > b)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (1)
//	{
//		scanf("%d %d %d", &a, &b, &c);
//		sort(a, b, c);
//	}
//	return 0;
//}

//дһ�������ӡ1-100֮������3�ı���������
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 ==0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//���������������������������Լ��
//���磺
//���룺20 40
//�����20
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (1)
//	{
//		printf("����������ֵ����������ǵ����Լ����\n");
//		scanf("%d %d", &a, &b);
//		c = a < b ?a : b;
//		while (a%c != 0 || b%c != 0)//ֻҪ��һ��û�����ͼ���
//		{
//			c--;
//		}
//		printf("�������Լ��Ϊ��%d\n",c);
//	}
//	return 0;
//}

//��ӡ1000�굽2000��֮�������
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0)||i %400 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//дһ�����룺��ӡ100~200֮�������
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;  //flag=1��Ϊi�������ı�־
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		 if (i % 10 == 9)
//		{
//			 printf("%d ", i);
//			count++;
//		}
//
//	}
//	printf("\n9�ĸ���Ϊ��%d\n", count);
//	return 0;
//}

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//int main()
//{
//	int i = 0;
//	float sum = 0;//�������С��������ѡ�ø�����
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*(1.0 / i);//������1/i����Ϊ�������������1.0/i���������С��
//		flag = -flag;
//	}
//	printf("���Ϊ��%f", sum);
//	return 0;
//}

//��10 �����������ֵ
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int tmp = 0;
//	while (1)
//	{
//		printf("������10����������������ֵ��\n");
//		for (i = 0; i < 10; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		for (i = 0; i < 9; i++)
//		{
//			if (arr[i] > arr[i + 1])//ֻ�ܱȽ�8�Σ���Ȼ�����
//			{
//				tmp = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = tmp;
//			}
//		}
//		printf("\n���ֵΪ��%d\n", arr[9]);
//	}
//		
//		return 0;//�������ѭ�����ڵĻ�������ѭ��
//	
//}

//����Ļ�����9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
int search_arr(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (k < arr[mid])
		{
			right = mid - 1;
		}
		else if (k>arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	if (left > right)
	{
		return -1;
	}
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 79;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = search_arr(arr, k, sz);
	if (ret != -1)
	{
		printf("�ҵ��ˣ��±�Ϊ��%d\n", ret);
	}
	else
	{
		printf("�Ҳ�����\n");
	}
}