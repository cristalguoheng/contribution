#define _CRT_SECURE_NO_WARNINGS


//1.���泣��

//int main()
//{
//	10;
//	3.14;
//	"w";//�ַ�
//	"abc";//�ַ���
//
//	return 0;
//}

//2.const���εĳ�����
//const���εĳ������ǲ����Ա��ı��
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	a = 50;
//	printf("a=%d\n", a);
//	return 0;
//}

//int main()
//{
//	const int a = 10;//��C�����У�const���ε��Ǳ������ǲ��ܱ��޸ģ����г��������ԣ����Խ���������
//	printf("a=%d\n", a);
//	//����֤������һ������
//	 //const int n = 10;
//	//int arr[n] = { 0 };
//	return 0;
//}

//#define ����ı�ʶ������
//#define MAX 100
//#define STR "abcd"
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%s\n", STR);
//	return 0;
//}


//ö�ٳ���
//enum Color
//{
//	RED,
//	BLUE,
//	GREEN
//};
//
//int main()
//{
//	
//	printf("%d\n", RED);
//	printf("%d\n", BLUE);
//	printf("%d\n", GREEN);
//	return 0;
//}
//�������ɱ�

//#include <string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = { 'b','i','t'};
//	char arr3[] = { 'b','i','t','\0'};
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	int len3 = strlen(arr3);
//	printf("%d\n", len1);
//	printf("%d\n", len2);
//	printf("%d\n", len3);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}




//#include <string.h>
//int main()
//{
//	char arr[] = "abcdef";//��������Բ�д���֣������������Զ�ȷ�������ַ����Ĵ�С
//    int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//strlen()��һ���⺯������string��length��ɣ�����������ַ����ĳ���

//int main()
//{
//	printf("hello\0 world");
//  printf("hello world");
//	return 0;
//}
//\0�ǽ�����־


//%c�������һ���ַ�
//%s�������һ���ַ���
//%d��ʾ���������ݵ�ʵ�ʳ����������
//%x��ʾ��ʮ����������ʽ�������


//int main()
//{
//	printf("abc\nd0asdf");
//	return 0;
//}
//

//���������壨\a)
//int main()
//{
//	printf("Beep!\a");
//	return 0;
//}


//�˸�\b��
//int main()
//{
//
//	printf("Hello\bWorld");
//
//	return 0;
//}


//�Ʊ����\t��
//int main()
//{
//
//	printf("Name:\tJohn\tAge:\t25");
//	return 0;
//}


//��ֱ�Ʊ����\v��
//int main()
//{
//	printf("Name:\vJohn\vAge:\v25");
//	return 0;
//}


//�س�����\r��
//int main()
//{
//	printf("abc\rdef");
//	return 0;
//}
//
//int main()
//{
//
//	printf("abcdef");
//	return 0;
//}


//(\')
//int main()
//{
//	//printf("%c", ''');
//	printf("%c", '\'');
//	return 0;
//}


//(\")
//int main()
//{
//	//printf("%s", """);
//	printf("%s", "\"");
//
//	return 0;
//}


//\ddd,d d d��ʾ1~3���˽��Ƶ����֣���\ddd��ʾ�ð˽�����������Ӧ��ASC||ֵ
//int main()
//{
//	printf("\130");
//	return 0;
//}


//\xhh,��ʾ����ʮ����������hh�������ASC||ֵ
//int main()
//{
//
//	printf("\x30");
//	return 0;
//}


//����ĸ��
//??) --> ] 
//??( --> [

//int main()
//{
//
//	printf("%s\n", "(Are you ok ? ? )");
//	(Are you ok]
//	printf("%s\n", "(Are you ok\? \? )"); 
//	return 0;
//}

//%d-��ӡ����
//%s-��ӡ�ַ���
//%c-��ӡ�ַ�
//%f-��ӡfloat���͵�����
//%lf-��ӡdouble���͵�����
//%zu-��ӡsizeof�ķ���ֵ

//int main()
//{
//	printf("abcdef\n");
//	printf("a\n");
//	printf("\\0\n");
//	printf("c:\\test\\test.c\n");
//	printf("\a\a\a\a\a\a");
//	printf("hell\boworld\n");
//	printf("hello\rworld\n");
//	printf("%c\n", '\130');//�˽���--��ʮ����--��ASCII��
//	printf("%c", '\x30');//ʮ������--��ʮ����--��ASCII��
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "ab  cdef";
//	printf("%d\n", strlen(arr1));
//
//	return 0;
//}

//c����ע�ͷ��
/*
int main()
{
	
	int a = 10;
	int b = 20;
	
	return 0;
}
*/


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

//int main()
//{
//	int input = 0;
//	printf("����\n");
//	printf("��Ҫ�ú�ѧϰ��0/1��\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("�õ�offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	printf("����\n");
//
//	while (line < 20000)
//	{
//		printf("д����:%d\n",line);
//		line++;
//	}
//	if (line == 20000)
//	{
//		printf("�õ���offer");
//	}
//	else
//	{
//		printf("��������");
//	}
//	return 0;
//}
//
//

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d %d", &num1 ,&num2);
//	sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}



//if else ���
//int main()
//{
//	int A = 1;
//	int B = 10;
//	if (A > B)
//	{
//		printf("A�ô�");
//	}
//	else
//	{
//		printf("A��С");
//	}
//	return 0;
//}
//

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n >= 7 && n <= 12)
//	{
//		printf("����");
//	}
//	else if (n >= 13 && n <= 18)
//	{
//		printf("����");
//	}
//	else if (n >= 19 && n <= 24)
//	{
//		printf("����");
//	}
//	else
//	{
//		printf("�賿");
//	}
//	return 0;
//}


//switch ,defult���
//int main()
//{
//	int n;
//	scanf("%d\n", &n);
//	switch (n)
//	{
//
//
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//	case 6:
//		printf("�賿\n");
//		break;
//	case 7:
//	case 8:
//	case 9:
//	case 10:
//	case 11:
//	case 12:
//		printf("����\n");
//		break;
//	case 13:
//	case 14:
//	case 15:
//	case 16:
//	case 17:
//	case 18:
//		printf("����");
//		break;
//	case 19:
//	case 20:
//	case 21:
//	case 22:
//	case 23:
//	case 24:
//		printf("����");
//		break;
//	}
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	int sum = Add(n1,n2);
//	printf("%d\n",sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	printf("%d", arr[4]);
//		return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	if (i = 10)
//		printf("ֹͣ");
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//



//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    \n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum=%d\n", sum);
//	return 0;
//}


#include<math.h>
int main()
{
	printf("��������������");
	double x1 = 0;
	double y1 = 0;
	double x2 = 0;
	double y2 = 0;
	double x3 = 0;
	double y3 = 0;
	scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
	double a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	double b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	double c = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	if (a + b > c && a + c > b && b + c > a)
	{
		printf("��������");
	}
	else
	{
		printf("����������");
	}
	return 0;
}











