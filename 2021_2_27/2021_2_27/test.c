#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//int main()
//{
//	//��1000��2000֮��ѭ��
//	int year = 0; //ѭ��������ĳ�ʼ��
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�ǲ�������
//		//�ж��������
//		//1.��4���������ܱ�100����������
//		//2.��400����Ҳ������
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d  ", year);
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d  ", year);
//		}*/
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)//��������������һ��
//
//		{  
//			printf("%d  ", year);
//		}
//	}
//	return 0;
//}

//�ж�����
//ֻ�ܱ�1�ͱ�����������������
//int main()
//{
//	//�ҳ�100��200�������
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++) //i��100��200�䣬����ִ�У�ִ����i+1��i=201ʱ����
//	{
//		int j = 0;
//		int flag = 1; //������ǣ�flag����1��ʱ��������
//		for (j = 2; j <= sqrt(i); j++)// ÿ��i�������ӳ���2~i-1�������������������������;��Χ�����Ż�2~������i����
//		{
//		
//			if (i%j ==0)//���ų����������������ų���
//			{
//				
//				flag = 0;
//				break;//ֻҪ������2��i-1�е�һ�����Ϳ����ж��䲻��������	
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

//��100���ں�����9�ĸ���
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

//����1/1-1/2+1/3+....1/99-1/100 ��ֵ����ӡ�����
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

//����10��������������ֵ
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 9; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];//�����ʼ��������0�������0������һ�鸺���Ļ������ֵ����max�������������������
//	for (i = 0; i < 9; i++)
//	{
//		if (arr[i]>max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}

//��Ļ�ϴ�ӡ99�˷���
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
			printf("%d*%d=%-2d ", i, j, i*j);//%2d���������λ�հ���գ�%-2d�����
		}
		printf("\n");
	}
	return 0;
}