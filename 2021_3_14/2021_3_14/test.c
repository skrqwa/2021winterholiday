#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <errno.h>
#include <assert.h>

//int main()
//{
//	//fopen д �򿪣��ļ������ڻᴴ�������ڻ����
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;//ʧ�ܷ���
//	}
//	//д�ļ�
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
//	//��һ��
//	//fgets(arr,100, pf);
//	//printf("%s\n", arr);
//
//	//������
//	//while (fgets(arr, 100, pf)!=NULL)
//	//{
//	//	printf("%s", arr);
//	//}
//
//	//fgets�ӱ�׼�������ж�ȡ
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
//	struct Stu s = { "����",20,66.5 };
//	FILE* pf = fopen("data",'r');
//	if (pf == NULL)
//	{
//		return 1;
//	}
//
//	//��ʽ����ȡ
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
//	//�Ȱ�Ŀ���������ʼ��ַ��ʱ����
//	//��Ϊ����Ҫ�ҵ�'\0',���dest��ָ�������ƶ�
//	
//
//	//while (*dest++)  
//	//��������������'\0',while������ж�ֹͣѭ��
//	//����"*dest++"��������ʹ�ú�+1
//	//Ҳ�����ж�����ַ�������һλ������ָ��ڶ���'/0'��
//	//�����Ļ���������ַ���û��������
//	//{
//	//	;
//	//}
//
//	while (*dest)
//   //�ҵ�Ŀ�������ֹͣ��־'\0',�����滻����Ҫ�����������ַ�
//	{
//		dest++;
//		//*dest��Ŀ������ĵ�һ���ַ���һֱ������
//		//ͬʱָ�������ƣ���'/0'ʱѭ��ֹͣ����ʱdestָ��ָ���һ��'\0'
//	}
//	//�ҵ�'/0'�ĵ�ַ��ʼ��������ַ�
//	while (n--)
//	//�������n���ַ�
//	{
//		*dest++ = *src++;
//		//srcָ��ָ��ĵ�һ���ַ���ֵ��dest(��ʱָ��ָ��'/0')
//		//srcָ��ĵڶ����ַ���ֵ��dest+1��ԭ��'/0'����һ����ַ�����ַ���
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
//	char *p = arr; //ָ����������Ԫ�صĵ�ַ
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
//	while (*arr1++) //*arr1һֱ��'h'��û���
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
