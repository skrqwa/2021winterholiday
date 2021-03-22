#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>


//int main()
//{
//	//相对路径
//	// ..表示上一层目录
//	// . 当前目录
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("打开文件失败\n");
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//打开文件成功
//	printf("打开文件成功\n");
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//fopen如果以写的形式打开
//	//如果文件不存在会创建文件
//	//如果以都的文件打开
//	//文件不存在会打开失败
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//写文件
//	/*fputc('c', pf);
//	fputc('d', pf);*/
//	int i = 0;
//	for (i = 'a'; i < 'z'; i++)
//	{
//		fputc(i, pf);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	fputc('a', stdout);
//	fputc('b', stdout);
//	return 0;
//}
//
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//	//打开文件成功
//	/*char ch = fgetc(pf);
//	printf("%c", ch);*/
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c", ch);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int ch = fgetc(stdin);
//	printf("c", ch);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fputs("hello bit", pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char arr[1024] = { 0 };
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//	//读一行数据
//	fgets(arr, 4, pf);
//	printf("%s\n", arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

