#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <errno.h>
#include <assert.h>

//int main()
//{
//	//fopen 写 打开，文件不存在会创建，存在会清空
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;//失败返回
//	}
//	//写文件
//	int i = 0;
//	for (i = 'a'; i<='z';i++)
//	{
//		fputc(i, pf);
//	}
//	
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//
//}

//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ",ch);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		return 1;
//	}
//	fputs("hello bit\n", pf);
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
//		return 1;
//	}
//	//读一行
//	//fgets(arr,100, pf);
//	//printf("%s\n", arr);
//
//	//读多行
//	//while (fgets(arr, 100, pf)!=NULL)
//	//{
//	//	printf("%s", arr);
//	//}
//
//	//fgets从标准输入流中读取
//	fgets(arr, 100, stdin);
//	printf("%s\n", arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct Stu s = { "张三",20,66.5 };
//	FILE* pf = fopen("data",'r');
//	if (pf == NULL)
//	{
//		return 1;
//	}
//
//	//格式化读取
//	fscanf(pf, "%s %d %f\n", s.name, &(s.age),&(s.score));
//	fprintf( stdout,"%s %d %f\n", s.name, &(s.age), &(s.score));
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//char* my_strncat(char* dest, const char* src, size_t n)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* start = dest;
//	//先把目标数组的起始地址临时保存
//	//因为后面要找到'\0',会把dest的指针往后移动
//	
//
//	//while (*dest++)  
//	//不能这样当遇到'\0',while会进行判断停止循环
//	//但是"*dest++"操作符是使用后+1
//	//也就是判断完后地址还会后移一位，最终指向第二个'/0'处
//	//这样的话往后添加字符就没有意义了
//	//{
//	//	;
//	//}
//
//	while (*dest)
//   //找到目标数组的停止标志'\0',将其替换给需要添加数组的首字符
//	{
//		dest++;
//		//*dest是目标数组的第一个字符，一直往后找
//		//同时指针往后移，到'/0'时循环停止，此时dest指针指向第一个'\0'
//	}
//	//找到'/0'的地址后开始往后添加字符
//	while (n--)
//	//往后添加n个字符
//	{
//		*dest++ = *src++;
//		//src指针指向的第一个字符赋值给dest(此时指针指向'/0')
//		//src指针的第二个字符赋值给dest+1（原来'/0'的下一个地址所在字符）
//	}
//	return start;
//}
//int main()
//{
//	char arr1[30] = { "hello " };
//	char arr2[10] = { "world" };
//	my_strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}

//char *My_strncat(char *dst, const char *src, size_t n)
//{
//	char *start = dst;
//	assert(dst != NULL);
//	assert(src != NULL);
//	while (*dst)
//	{
//		dst++;
//	}
//	while (n--)
//	{
//		*dst++ = *src++;
//	}
//	return start;
//}
//int main()
//{
//	char arr1[20] = "Hello ";
//	char arr2[] = "world";
//	char *p = My_strncat(arr1, arr2, 3);
//	printf("%s\n", p);
//
//	return 0;
//}
//int main()
//{
//	char arr[9] = { "abcde" };
//	char *p = arr; //指针存放数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	int i = 0;
//	while (*p++)
//	{
//		printf("%c\n", *p);
//		p++;
//		printf("%p\n", p);
//	}
//	printf("%p\n", p);
//	return 0;
//}

//char* my_strncpy(char* dest, const char* src, size_t n)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* start = dest;
//	while (n--)
//	{
//		*dest++ = *src++;
//	}
//	return start;
//}
//
//int main()
//{
//	char arr1[10] = "hello";
//	char arr2[10] = "world";
//	my_strncpy(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	char* start = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return start;
//}
//int main()
//{
//	char arr1[10] = "hello";
//	char arr2[10] = "world";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int my_strcmp(const char* arr1, const char* arr2)
//{
//	int len1 = 0;
//	while (*arr1++) //*arr1一直是'h'，没变过
//	{
//		len1++;
//	}
//	int len2 = 0;
//	while (*arr2++)
//	{
//		len2++;
//	}
//	return len1 - len2;
//
//}
//int main()
//{
//	char arr1[10] = "hello";
//	char arr2[10] = "world  ";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret < 0)
//	{
//		printf("arr1<arr2\n");
//	}
//	else if (ret>0)
//	{
//		printf("arr1>arr2\n");
//	}
//	else
//	{
//		printf("arr1=arr2\n");
//	}
//	return 0;
//}

size_t my_strlen1(const char* arr)
{
	size_t len = 0;
	while (*arr++)
	{
		len++;
	}
	return len;
}
size_t my_strlen2(const char* arr)
{
	char* start = arr;
	while (*arr)
	{
		arr++;
	}
	return arr-start;
}
int main()
{
	char arr1[10] = "hello";
	/*printf("%d\n", my_strlen1(arr1));*/
	printf("%d\n", my_strlen2(arr1));
	return 0;
}
