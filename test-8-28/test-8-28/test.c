#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a, b, c;
//	double delta = 0;
//	double x1, x2;
//	printf("����a,b,c");
//	scanf("%d %d %d", &a, &b, &c);
//	delta = b * b - 4*a * c;
//	if (delta >= 0)
//	{
//		printf("�н�\n");
//		x1 = (-b/2 + sqrt(delta)/2);
//		x2 = (-b/2- sqrt(delta)/2);
//		printf("%f %f",x1,x2);
//	}
//	else
//	{
//		printf("�޽�");
//	}
//	return 0;
//}


//typedef���÷�
//typedef int num;
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	num a = 20;
//	printf("%d\n", a);
//	return 0;
//}

//static���÷�
//static���ξֲ�����
//����void
//void����գ����ڷ���ֵ�ϣ�˵���˺���ִ���겻�����κ�ֵ
//���ڲ���λ����˵������ʽ����
//void���εĺ�������Ҫ����ֵ�����ص������������εĺ�����Ҫ�з���ֵ
//void swap(int a, int b)
//{
//	int c;
//	c = a;
//	a = b;
//	b = c;
//}
//����

//int text02()
//{
//	printf("text02");
//	return 1;
//}
//
//void text01()
//{
//	printf("text01");
//}
//
//int main()
//{
//	int a = text02();
//	text01();
//
//	return 0;
//}

//������ʾstatic���ξֲ�����
// ����һ
//void text()
//{
//	int i = 0;
//	i++;
//	printf("%d", i);
//}
//
//int main()
//{
//	int j = 0;
//	for (int j = 0; j < 10; j++)
//	{
//		text();
//	}
//	return 0;
//}

//����2
//void text()
//{
//	static int i = 0;
//	i++;
//	printf("%d", i);
//}
//
//int main()
//{
//	int j = 0;
//	for (int j = 0; j < 10; j++)
//	{
//		text();
//	}
//	return 0;
//}



//static����ȫ�ֱ���
//��static������ȫ�ֱ���ʱ�����޷�����ʹ�øñ�����
//����
//extern int a;
//int main()
//{
//	printf("%d", a);
//	return 0;
//}

//����1
//int Add(int a, int b)
//{
//	return a + b;
//}
// 

//����2
//static int Add(int a, int b)
//{
//	return a + b;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d %d", &num1, &num2);
//	sum = Add(num1,num2);
//	printf("sum=%d", sum);
//	return 0;
//}

//���ϣ����ǿ��Է��ֵ�ʹ��static���κ���ʱ���������ᷢ�������Դ���

//#define���峣���ͺ�
//��C�����г�����һ��ʹ��Ƶ�ʺܸߵ��������ҳ��������ǲ��ܱ��ı�ġ�
//#define������ı��Ƿ��ų���


//#define MAX 10000
//
////#define�����
//#define Add(x,y)(x+y)
//int main()
//{
//	int sum = Add(2, 3);
//	printf("%d", sum);
//	return 0;
//}

//ָ��
//1:�ڴ�
//�ڴ��Ǽ�����ر���Ҫ�Ĵ��������ڴ汻����һ����СС�ĵ�Ԫ������Ϊ�˳���ĸ�Ч���С�
//һ����Ԫ�Ĵ�СԼΪһ���ֽڣ�ÿһ���ڴ浥Ԫ�������ǵĵ�ַ
//����ռ�����ڴ��һ���֣����Ա���ͬ�����е�ַ��

//int main()
//{
//	int a = 10;
//	&a;
//	printf("%p\n", a);
//	return 0;
//}

//��ַ�Ĵ�����Ҫ����ָ�����
//int main()
//{
//	int num = 10;
//	int *p = &num;
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	return 0;
//}

int main()
{
	printf("%d\n", sizeof(char*));//8
	printf("%d\n", sizeof(short*));//8
	printf("%d\n", sizeof(int*));//8
	printf("%d\n", sizeof(float*));//8
	printf("%d\n", sizeof(double*));//8
	return 0;
}












