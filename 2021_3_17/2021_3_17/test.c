#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include <string.h>

//int my_strcmp(const char* str1, const char* str2)
////str1 str2���漰�޸ģ�������const���γɳ���
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);//�ȶ��ԣ�ȷ�������ַ�����ַ���ǿ�ָ��
//	int len1 = 0;
//	int len2 = 0;
//	while (*str1++)
//	{
//		len1++;
//	}
//	while (*str2++)
//	{
//		len2++;
//	}
//	return len1 - len2;
//}
//int main()
//{
//	char arr1[20] = "aab";
//	char arr2[10] = "dda";
//	int ret = strcmp(arr1, arr2);//������������Ԫ�ص�ַ
//	printf("%d\n",ret);
	//if (ret > 0)
	//{
	//	printf("str1>str2\n");
	//}
	//else if (ret < 0)
	//{
	//	printf("str1<str2\n");
	//}
	//else
	//{
	//	printf("str1=str2\n");
	//}

//	return 0;
//}

//size_t my_strlen1(char* arr)
//{
//	assert(arr != NULL);
//	size_t len = 0;
//	while (*arr++)
//	{
//		len++;
//	}
//	return len;
//}
//size_t my_strlen2(char* arr)
//{
//	assert(arr != NULL);
//	char* start = arr;//�׵�ַ
//	while (*arr)
//	{
//		arr++;//ѭ������ָ��ָ��'\0'
//	}
//	return arr - start;
//}
//int main()
//{
//	char arr[10] = "hello";
//	size_t len1 = my_strlen1(arr);
//	size_t len2 = my_strlen2(arr);
//	printf("len1 = %d\n", len1);
//	printf("len2 = %d\n", len2);
//	return 0;
//}
//char* my_strncpy(char *dest, const char *src,size_t n)
//{
//	assert(dest != NULL);
//	assert(src != NULL);//�ȶ��ԣ�ȷ�������ַ�����ַ���ǿ�ָ��
//	char*start = dest;
//	while (n--)
//	{
//		*dest++ = *src++;
//	}
//	return start;
//}
//int main()
//{
//	char arr1[10] = "hellohe";
//	char arr2[10] = "world";
//	my_strncpy(arr1, arr2,5);
//	printf("%s\n", arr1);
//	return 0;
//}
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (!(*(unsigned char*)str1 - *(unsigned char*)str2) && *str1)
//	//ֻҪstr1��str2���ַ���ͬ����str1û����'\0',��һֱѭ��
//	{
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//int main()
//{
//	char arr1[10] = "adcdA";
//	char arr2[10] = "abcde";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret < 0)
//	{
//		printf("str1<str2\n");
//	}
//	else if (ret>0)
//	{
//		printf("str1>str2\n");
//	}	
//	else
//	{
//		printf("str1=str2");
//	}
//}
int my_strncmp(const char* str1, const char* str2,size_t n)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	
	while (!(*(unsigned char*)str1 - *(unsigned char*)str2) && *str1 && --n)
		//ֻҪstr1��str2���ַ���ͬ����str1û����'\0',��һֱѭ��
		//����ֻ����--n����������n--����������˼��Ϊʲô��
	{
		
		str1++;
		str2++;
	}
	return *str1 - *str2;
}
int main()
{
	char arr1[10] = "abceA";
	char arr2[10] = "abcde";
	int ret = my_strncmp(arr1, arr2,3);
	if (ret < 0)
	{
		printf("str1<str2\n");
	}
	else if (ret>0)
	{
		printf("str1>str2\n");
	}
	else
	{
		printf("str1=str2\n");
	}
}