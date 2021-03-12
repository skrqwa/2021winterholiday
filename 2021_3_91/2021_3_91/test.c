#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////molloc
//int main()
//{
//	int arr[10] = { 0 };//在栈上申请了40个字节的空间
//	//动态内存开辟
//	int* p = malloc(40);//希望把40个字节当成一个10个整形的数组
//	return 0;
//}
//int main()
//{
//	/*putchar输出字符*/
//	printf("\n");
//	putchar('h');//h就是一个字符，用单引号输出
//	putchar('e');
//	putchar('l');
//
//	putchar(104);//h就是一个字符，对应整数是104 ASCII码
//	putchar('\n');
//
//	putchar('\101');//\ddd代表三位八进制,整数对应A的字符
//	
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	while ((scanf("%c", &input)) != EOF)
//	{
//		/*if (input = '\n')
//			continue;*/
//		 if (input >= 'A' && input <= 'Z')
//		{
//			input = input + 32;
//			printf("%c\n", input);
//		}
//		else if (input >= 'a' && input <= 'z')
//		{
//			input = input - 32;
//			printf("%c\n", input);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char input = 0;
//	while ((input = getchar()) != EOF)
//	{
//		if (input >= 'A' && input <= 'Z')
//		{
//			input = input + 32;
//			putchar(input);
//			printf("\n");
//		}
//		else if (input >= 'a' && input <= 'z')
//		{
//			input = input - 32;
//			putchar(input);
//			printf("\n");
//		}
//	}
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>//rand()和srand()函数的库
#include <time.h> //time()函数的库

int main()
{
	srand((unsigned int)time(NULL));//产生一个动态的随机种子
	int input = 0;
	int num = 0;
	num = rand() % 100;
	printf("猜猜我心里想的数，在1~100之间选择：\n");
	while ((scanf("%d", &input)) != EOF)
	{
		if (input > num)
		{
			printf("你的数猜大了，再试试看。\n");
		}
		else if (input <num)
		{
			printf("你的数猜小了，再试试看。\n");
		}
		else
		{
			printf("恭喜你猜对了，真是天才啊！\n");
		}
	}
	return 0;
}