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
int search_arr(int arr[], int k, int sz)
{
	int left = 0;//���±�
	int right = sz - 1;//���±�
	int mid = 0;
	while (left <= right)
	{
		mid = left + (right-left) / 2;
		if (k < arr[mid])
		{
			right = mid - 1;//���kС���м�ֵ����ôk�����ߣ���ʱ�ұ߽���С��mid-��
		}
		else if (k>arr[mid])
		{
			left = mid + 1;//���k�����м�ֵ����ô�����Ұ�ߣ���ʱ��߽����ӵ�mid-1��
		}
		else
		{
			return mid;//k=arr[mid]ʱ���ҵ���
		}
	}
	if (left > right)//���ָ��ֵ���������ڣ���ô����left��һֱ���ӵ�10����rightһֱ��9���ֲ��䣬���Ի�����ѭ�������������ж����
	{
		return -1;
	}
	
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 10;
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ĵ�С����һ��Ԫ�صĴ�С��������ĳ���
	int ret = search_arr(arr, k, sz);
	if (ret!=-1)
	{
		printf("���ҵ�Ԫ��Ϊ��%d���±��ǣ�%d\n", k, ret);
	}
	else
	{
		printf("����ʧ��/n");
	}
	
	return 0;
}