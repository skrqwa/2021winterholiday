#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

void replacespace(char* str, int len)
{
	int i = 0;
	int spacacount = 0;
	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ')
		{
			spacacount++;
		}
	}
	int newlen = len + spacacount * 2;
	int pos = newlen - 1;
	for (i = len-1; i >= 0; i--)
	{
		if (str[i] == ' ')
		{
			str[pos--] = '0';
			str[pos--] = '2';
			str[pos--] = '%';
		}
		else
		{
			str[pos--] = str[i];
		}
	}
}
int main()
{
	char arr[30] = "hello bit ni  ";
	int len = strlen(arr);
	replacespace(arr, len);
	printf("%s\n", arr);
}