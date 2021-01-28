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

//自定义函数
//函数返回值类型 函数名 函数参数
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

//写个函数交换a和b的值
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
//	printf("交换前：       a=%d  b=%d\n", a, b);
//	Swap1(a, b);
//	printf("Swap1交换后：a=%d  b=%d\n", a, b);
//	Swap2(&a, &b);
//	printf("Swap2交换后：  a=%d  b=%d\n", a, b);
//	return 0;
//}

//递归
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

//二分查找
int search_arr(int arr[], int k, int sz)
{
	int left = 0;//左下标
	int right = sz - 1;//右下标
	int mid = 0;
	while (left <= right)
	{
		mid = left + (right-left) / 2;
		if (k < arr[mid])
		{
			right = mid - 1;//如果k小于中间值，那么k在左半边，此时右边界缩小到mid-；
		}
		else if (k>arr[mid])
		{
			left = mid + 1;//如果k大于中间值，那么可在右半边，此时左边界增加到mid-1；
		}
		else
		{
			return mid;//k=arr[mid]时就找到了
		}
	}
	if (left > right)//如果指定值不在数组内，那么最终left会一直增加到10，而right一直是9保持不变，所以会跳出循环。来到这条判断语句
	{
		return -1;
	}
	
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 10;
	int sz = sizeof(arr) / sizeof(arr[0]);//数组的大小除以一个元素的大小等于数组的长度
	int ret = search_arr(arr, k, sz);
	if (ret!=-1)
	{
		printf("查找的元素为：%d，下标是：%d\n", k, ret);
	}
	else
	{
		printf("查找失败/n");
	}
	
	return 0;
}