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
//int search_arr(int arr[], int k, int sz)
//{
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right-left) / 2;
//		if (k < arr[mid])
//		{
//			right = mid - 1;//如果k小于中间值，那么k在左半边，此时右边界缩小到mid-；
//		}
//		else if (k>arr[mid])
//		{
//			left = mid + 1;//如果k大于中间值，那么可在右半边，此时左边界增加到mid-1；
//		}
//		else
//		{
//			return mid;//k=arr[mid]时就找到了
//		}
//	}
//	if (left > right)//如果指定值不在数组内，那么最终left会一直增加到10，而right一直是9保持不变，所以会跳出循环。来到这条判断语句
//	{
//		return -1;
//	}
//	
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 10;
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的大小除以一个元素的大小等于数组的长度
//	int ret = search_arr(arr, k, sz);
//	if (ret!=-1)
//	{
//		printf("查找的元素为：%d，下标是：%d\n", k, ret);
//	}
//	else
//	{
//		printf("查找失败/n");
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
//		if (i = 5)//因为这里是赋值，所以程序执行到这里i=5了，会一直死循环
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

//输入三个整数，从大到小排序
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

//写一个代码打印1-100之间所有3的倍数的数字
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

//给定两个数，求这两个数的最大公约数
//例如：
//输入：20 40
//输出：20
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (1)
//	{
//		printf("请输入两个值，将输出它们的最大公约数：\n");
//		scanf("%d %d", &a, &b);
//		c = a < b ?a : b;
//		while (a%c != 0 || b%c != 0)//只要有一个没整除就继续
//		{
//			c--;
//		}
//		printf("它们最大公约数为：%d\n",c);
//	}
//	return 0;
//}

//打印1000年到2000年之间的闰年
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

//写一个代码：打印100~200之间的素数
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;  //flag=1作为i是素数的标志
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

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
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
//	printf("\n9的个数为：%d\n", count);
//	return 0;
//}

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//int main()
//{
//	int i = 0;
//	float sum = 0;//算出来是小数，类型选用浮点型
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*(1.0 / i);//不能用1/i；因为算出来是整数，1.0/i算出来才是小数
//		flag = -flag;
//	}
//	printf("结果为：%f", sum);
//	return 0;
//}

//求10 个整数中最大值
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int tmp = 0;
//	while (1)
//	{
//		printf("请输入10个整数，将输出最大值：\n");
//		for (i = 0; i < 10; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		for (i = 0; i < 9; i++)
//		{
//			if (arr[i] > arr[i + 1])//只能比较8次，不然会溢出
//			{
//				tmp = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = tmp;
//			}
//		}
//		printf("\n最大值为：%d\n", arr[9]);
//	}
//		
//		return 0;//这个放在循环体内的话会跳出循环
//	
//}

//在屏幕上输出9*9乘法口诀表
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

//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
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
		printf("找到了，下标为：%d\n", ret);
	}
	else
	{
		printf("找不到。\n");
	}
}