#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <windows.h>




//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//10*4 = 40
//	int k = 17;
//	//������������в��Ҿ����ĳ����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//40/4=10
//	
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	//
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//




//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//10*4 = 40
//	int k = 17;
//	//������������в��Ҿ����ĳ����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//40/4=10
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}
//


//
//����ʱ�䵱�����ѡ� - 
// ��ǽ費�ɶ�Ҳ~
//
//
//int main()
//{
//	int n = 0;
//	//
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//1!+2!+3!
//	//1+2+6 = 9
//	//3!*4 ==> 4!*5==>5!*6==>6!
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	//n ��Ҫ̫��
//
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	//
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//1!+2!+3!
//	//1+2+6 = 9
//	//3!*4 ==> 4!*5==>5!*6==>6!
//
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//
//		sum += ret;
//	}
//	
//	printf("%d\n", sum);
//
//	//n ��Ҫ̫��
//
//	return 0;
//}

//
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	//1 2 3 4
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//	//1 2 3 4
//	return 0;
//}

//
//int main()
//{
//	//forѭ����3�����ֶ�����ʡ��
//	//�жϲ������ʡ����-��ʾ��Ϊ��
//
//	/*for (;;)
//	{
//		printf("hehe\n");
//	}*/
//
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	//��ӡ������
//
//	return 0;
//}


//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//0-9
//	int i = 0;
//	//[0,10)
//	//[0,9]
//	for (i = 0; i <10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//		Sleep(1000);
//		i = 5;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	//1-10
//	int i = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//	}
//
//	return 0;
//}
//
//


//int main()
//{
//	int i = 0;//��ʼ��-1
//
//	while (i < 100)//�жϲ���-2
//	{
//		//.....
//		i += 2;//����-3
//	}
//
//	return 0;
//}


//
//int main()
//{
//	char password[10] = {0};
//	printf("����������:>");
//	//gets()//��ȡһ��
//
//	scanf("%s", password);
//	//����һ�»�����
//	//getchar();//'\n'
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("��ȷ��(Y/N):>");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//��ȡʧ�ܵ�ʱ��getchar����EOF
//	//EOF - end of file -1
//	//ctrl+z
//
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//getchar - �ӱ�׼���루���̣���ȡһ���ַ�
//	ch = getchar();
//	//��ӡһ���ַ�����׼�������Ļ��
//	putchar(ch);
//
//	return 0;
//}

//int main()
//{
//	//1-10
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//continue����������ѭ����continue��ߵĴ��룬ֱ�ӵ�ѭ�����жϲ��֣�������һ��ѭ��������ж�
//
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	//1-10
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;//��ֹѭ����
//
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//
//int main()
//{
//	if (1)
//		printf("hehe\n");
//
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case 1:	n++;
//		case 2:m++;n++;break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}




//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	int n = 1;
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("ѡ�����\n");
//		break;
//	}
//
//	return 0;
//}


//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	int n = 1;
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	if (1 == day)
//		printf("����1\n");
//	else if (2 == day)
//		printf("����2\n");
//	else if (3 == day)
//		printf("����3\n");
//	//...
//
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i+=2)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (i % 2 == 1)
//			printf("%d ", i);
//	}
//
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//}


//int main()
//{
//	int num = 1;
//	if (5 == num)
//		printf("hehe\n");
//
//	return 0;
//}


//int test()
//{
//	int x = 10;
//	int y = 20;
//	if (1)
//		return x;
//	return y;
//}
//int main()
//{
//	printf("%d\n", test());
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//	return 0;
//}

