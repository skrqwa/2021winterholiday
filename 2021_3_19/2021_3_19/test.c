#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////递归方式实现打印一个整数的每一位
//void print(int n)
//{
//	if (n % 10 != 0)
//	{
//		print(n / 10);
//		printf("%d ", n % 10);
//	}	
//}
//int main()
//{
//	print(1234);
//	return 0;
//}

////递归和非递归分别实现求n的阶乘
////非递归
//int Fac1(int n)
//{
//	int sum = n;
//	while (--n)
//	{
//		sum *= n;
//	}
//	return sum;
//}
////递归
//int Fac2(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n*Fac2(n - 1);
//}
//int main()
//{
//	int ret1 = Fac1(5);
//	int ret2 = Fac2(5);
//	printf("ret1 = %d\n", ret1);
//	printf("ret2 = %d\n", ret2);
//	return 0;
//}

////递归和非递归分别实现strlen
////非递归
//int my_strlen1(char arr[])
//{
//	int len = 0;
//	while (*arr++)
//	{
//		len++;
//	}
//	return len;
//}
////递归
//int my_strlen2(char* arr)
//{
//	if (*arr == '\0')
//	{
//		return 0;
//	}	
//	else
//	{
//		return 1 + my_strlen2(arr + 1);
//	}
//
//}
//int main()
//{
//	char arr[10] = "hello";
//	int ret1 = my_strlen1(arr);
//	int ret2 = my_strlen2(arr);
//	printf("ret1 = %d\n", ret1);
//	printf("ret2 = %d\n", ret2);
//	return 0;
//}

//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//void Reverse_string(char* ch)
//{
//	ch++;
//	if (*ch != '\0'){
//		Reverse_string(ch);
//	}
//	ch--;
//	printf("%c", *ch);
//}
//int main()
//{
//	char ch[10] = "abcdef";
//	Reverse_string(ch);
//	return 0;
//}

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
//
//int DigitSum(int n)
//{
//	if (n / 10 != 0)
//		return (n % 10) + DigitSum(n / 10);
//	else
//		return n % 10;
//
//}
//int main()
//{
//	int ret = DigitSum(1792);
//	printf("%d\n", ret);
//	return 0;
//}

//编写一个函数实现n的k次方，使用递归实现。
//int NK(int n, int k)
//{
//	if (k != 1)
//		return n*NK(n, k - 1);
//	else
//		return n;
//}
//int main()
//{
//	int ret = NK(10, 5);
//	printf("%d\n", ret);
//	return 0;
//}

//递归和非递归分别实现求第n个斐波那契数
//例如：
//输入：5  输出：5
//输入：10， 输出：55
//输入：2， 输出：1
//int fabonacci1(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return  fabonacci1(n - 1) + fabonacci1(n - 2);
//}
//int fabonacci2(int n)
//{
//	int a = 1;//第一个数
//	int b = 1;//第二个数
//	int c = 1;//n<=2时，第三个数为1
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int ret1 = fabonacci1(8);
//	int ret2 = fabonacci2(8);
//	printf("ret1 = %d\n", ret1);
//	printf("ret2 = %d\n", ret2);
//	return 0;
//}

//实现一个对整形数组的冒泡排序
//int* b_sort(int arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - i-1; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	return arr;
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[9] = { 5, 2, 6, 8, 7, 9, 6, 4, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = b_sort(arr, sz);
//	print_arr(p,sz);
//	return 0;
//}

//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//void init(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void reverse(int arr[], int sz)
//{
//	int i = 0;
//	for(i = 0; i < sz/2; i++)
//	{
//		int tmp = arr[i];
//		arr[i] = arr[sz - 1 - i];
//		arr[sz - 1 - i] = tmp;
//	}
//}
//int main()
//{
//	int arr[8] = { 1, 2, 5, 8, 7, 6, 1, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);
//	print(arr, sz);
//	printf("\n");
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void swap_arr(int* arr, int* brr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr[i];
//		arr[i] = brr[i];
//		brr[i] = tmp;
//	}
//}
//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int brr[5] = { 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	swap_arr(arr, brr,sz);
//	printf("arr:\n");
//	print(arr,sz);
//	printf("\n");
//	printf("brr:\n");
//	print(brr, sz);
//	return 0;
//}

//不允许创建临时变量，交换两个整数的内容
int swap(int* a,int* b)
{
	/**a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;*/
	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("交换前：a = %d; b = %d\n", a, b);
	swap(&a,&b);
	printf("交换后：a = %d; b = %d\n", a, b);
	return 0;
}