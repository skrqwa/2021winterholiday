#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////molloc
//int main()
//{
//	int arr[10] = { 0 };//��ջ��������40���ֽڵĿռ�
//	//��̬�ڴ濪��
//	int* p = malloc(40);//ϣ����40���ֽڵ���һ��10�����ε�����
//	return 0;
//}
//int main()
//{
//	/*putchar����ַ�*/
//	printf("\n");
//	putchar('h');//h����һ���ַ����õ��������
//	putchar('e');
//	putchar('l');
//
//	putchar(104);//h����һ���ַ�����Ӧ������104 ASCII��
//	putchar('\n');
//
//	putchar('\101');//\ddd������λ�˽���,������ӦA���ַ�
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
#include <stdlib.h>//rand()��srand()�����Ŀ�
#include <time.h> //time()�����Ŀ�

int main()
{
	srand((unsigned int)time(NULL));//����һ����̬���������
	int input = 0;
	int num = 0;
	num = rand() % 100;
	printf("�²����������������1~100֮��ѡ��\n");
	while ((scanf("%d", &input)) != EOF)
	{
		if (input > num)
		{
			printf("������´��ˣ������Կ���\n");
		}
		else if (input <num)
		{
			printf("�������С�ˣ������Կ���\n");
		}
		else
		{
			printf("��ϲ��¶��ˣ�������Ű���\n");
		}
	}
	return 0;
}