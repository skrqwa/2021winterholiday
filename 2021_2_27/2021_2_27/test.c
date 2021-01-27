#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//int main()
//{
//	//在1000到2000之间循环
//	int year = 0; //循环体变量的初始化
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是不是闰年
//		//判断闰年规则：
//		//1.被4整除，不能被100整除是闰年
//		//2.被400整除也是闰年
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d  ", year);
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d  ", year);
//		}*/
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)//把两个条件放在一起
//
//		{  
//			printf("%d  ", year);
//		}
//	}
//	return 0;
//}

//判断素数
//只能被1和本身整除的数是素数
//int main()
//{
//	//找出100到200间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++) //i从100到200间，满足执行，执行完i+1；i=201时结束
//	{
//		int j = 0;
//		int flag = 1; //做个标记，flag等于1的时候是素数
//		for (j = 2; j <= sqrt(i); j++)// 每个i进来都从除以2~i-1，如果都不能整除，则是素数;范围可以优化2~到根号i即可
//		{
//		
//			if (i%j ==0)//用排除法，不是素数就排除掉
//			{
//				
//				flag = 0;
//				break;//只要能整除2到i-1中的一个数就可以判断其不是素数了	
//			}
//		
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}

//求100以内含出现9的个数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count =%d\n", count);
//	return 0;
//}

//计算1/1-1/2+1/3+....1/99-1/100 的值，打印出结果
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//输入10个整数，输出最大值
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 9; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];//这里初始化不能是0；如果是0，输入一组负数的话，最大值就是max，而不是数组里的数了
//	for (i = 0; i < 9; i++)
//	{
//		if (arr[i]>max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}

//屏幕上打印99乘法表
//1*1=1
//1*2=2 2*2=4
int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i*j);//%2d如果不够两位空白填空；%-2d左对齐
		}
		printf("\n");
	}
	return 0;
}