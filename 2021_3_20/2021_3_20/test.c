#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>


//int main()
//{
//	//���·��
//	// ..��ʾ��һ��Ŀ¼
//	// . ��ǰĿ¼
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("���ļ�ʧ��\n");
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//���ļ��ɹ�
//	printf("���ļ��ɹ�\n");
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//fopen�����д����ʽ��
//	//����ļ������ڻᴴ���ļ�
//	//����Զ����ļ���
//	//�ļ������ڻ��ʧ��
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//д�ļ�
//	/*fputc('c', pf);
//	fputc('d', pf);*/
//	int i = 0;
//	for (i = 'a'; i < 'z'; i++)
//	{
//		fputc(i, pf);
//	}
//	//�ر��ļ�
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
//	//���ļ��ɹ�
//	/*char ch = fgetc(pf);
//	printf("%c", ch);*/
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c", ch);
//	}
//	//�ر��ļ�
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
//	//�ر��ļ�
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
//	//��һ������
//	fgets(arr, 4, pf);
//	printf("%s\n", arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

