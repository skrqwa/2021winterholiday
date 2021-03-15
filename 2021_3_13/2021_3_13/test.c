#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//malloc
//int main()
//{
//	int arr[10] = { 0 };//在栈上申请了40个字节空间
//	
//	//动态内存开辟 - 堆区上
//	int* p =(int *)malloc(40);//希望把40个字节当初一个10个整型的数组
//	if (p == NULL)
//	{
//		printf("内存开辟失败\n");
//	}
//	else
//	{
//		//开辟成功
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = 0;
//			printf("%d", p[i]);
//		}
//		//不在使用p只想的动态内存
//		//手动释放开辟夫人内存
//		free(p);
//		p = NULL;
//	}
//
//	return 0;
//}

//malloc开辟空间不初始化
//malloc传递参数只有1个，空间大小
//calloc开辟空间初始化
//calloc传递参数有两个，个数和每个大小
int main()
{
   int*p = (int*)calloc(10, sizeof(int));
   return 0;
   if (p == NULL)
   {
	   printf("%s\n", streeeor(errno));
   }
   else
   {
	   int i = 0;
	   for (i = 0; i < 10; i++)
	   {
		   printf("%d", *(p + i));
	   }
	   //释放
	   int* prt = (int*)realloc(p, sizeof(int)* 80);
	   free(prt);
	   p = NULL;
   }

}