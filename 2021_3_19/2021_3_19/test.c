#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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

////�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
////�ǵݹ�
//int Fac1(int n)
//{
//	int sum = n;
//	while (--n)
//	{
//		sum *= n;
//	}
//	return sum;
//}
////�ݹ�
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

////�ݹ�ͷǵݹ�ֱ�ʵ��strlen
////�ǵݹ�
//int my_strlen1(char arr[])
//{
//	int len = 0;
//	while (*arr++)
//	{
//		len++;
//	}
//	return len;
//}
////�ݹ�
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

//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
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

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19
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

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
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

//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//���磺
//���룺5  �����5
//���룺10�� �����55
//���룺2�� �����1
//int fabonacci1(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return  fabonacci1(n - 1) + fabonacci1(n - 2);
//}
//int fabonacci2(int n)
//{
//	int a = 1;//��һ����
//	int b = 1;//�ڶ�����
//	int c = 1;//n<=2ʱ����������Ϊ1
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

//ʵ��һ�������������ð������
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

//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
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

//������A�е����ݺ�����B�е����ݽ��н�����������һ����
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

//����������ʱ������������������������
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
	printf("����ǰ��a = %d; b = %d\n", a, b);
	swap(&a,&b);
	printf("������a = %d; b = %d\n", a, b);
	return 0;
}