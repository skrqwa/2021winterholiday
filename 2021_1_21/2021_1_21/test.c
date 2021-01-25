#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year% 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			printf("%d  ",year);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 9 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n count =%d", count);
//	return 0;
//}

//int binary_search(int arr[],int k,int len)
//{
//	
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//
//	}
//	return -1;
//}
//int main()
//{
//	//有序的
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 100;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	//二分查找的
//	//找到了，返回下标
//	//找不到，返回 -1
//	int ret = binary_search(arr, k ,len);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}
//int binary_search(int arr[], int n, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (n < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (n> arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n = 88;
//	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof求出对象在计算机内存中所占用的字节数40/4=10
//		int ret = binary_search(arr, n, sz);
//		if ( ret == -1)
//		{
//			printf("没找到！\n");
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", ret);
//		}
//	
//}

int main()
{
	int arr[10] = { 1,2,3};
	int i = 0;
	for (i = 0; i <= 9; i++)
	{
		printf("%d ", &arr[i]);
	}

}