#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//malloc
//int main()
//{
//	int arr[10] = { 0 };//��ջ��������40���ֽڿռ�
//	
//	//��̬�ڴ濪�� - ������
//	int* p =(int *)malloc(40);//ϣ����40���ֽڵ���һ��10�����͵�����
//	if (p == NULL)
//	{
//		printf("�ڴ濪��ʧ��\n");
//	}
//	else
//	{
//		//���ٳɹ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = 0;
//			printf("%d", p[i]);
//		}
//		//����ʹ��pֻ��Ķ�̬�ڴ�
//		//�ֶ��ͷſ��ٷ����ڴ�
//		free(p);
//		p = NULL;
//	}
//
//	return 0;
//}

//malloc���ٿռ䲻��ʼ��
//malloc���ݲ���ֻ��1�����ռ��С
//calloc���ٿռ��ʼ��
//calloc���ݲ�����������������ÿ����С
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
	   //�ͷ�
	   int* prt = (int*)realloc(p, sizeof(int)* 80);
	   free(prt);
	   p = NULL;
   }

}