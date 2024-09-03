#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a, b, c;
//	double delta = 0;
//	double x1, x2;
//	printf("输入a,b,c");
//	scanf("%d %d %d", &a, &b, &c);
//	delta = b * b - 4*a * c;
//	if (delta >= 0)
//	{
//		printf("有解\n");
//		x1 = (-b/2 + sqrt(delta)/2);
//		x2 = (-b/2- sqrt(delta)/2);
//		printf("%f %f",x1,x2);
//	}
//	else
//	{
//		printf("无解");
//	}
//	return 0;
//}


//typedef的用法
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

//static的用法
//static修饰局部变量
//介绍void
//void代表空，放在返回值上，说明此函数执行完不返回任何值
//放在参数位置上说明无形式参数
//void修饰的函数不需要返回值，而特点数据类型修饰的函数需要有返回值
//void swap(int a, int b)
//{
//	int c;
//	c = a;
//	a = b;
//	b = c;
//}
//如下

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

//下面演示static修饰局部变量
// 代码一
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

//代码2
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



//static修饰全局变量
//当static修饰了全局变量时，则无法声明使用该变量。
//如下
//extern int a;
//int main()
//{
//	printf("%d", a);
//	return 0;
//}

//代码1
//int Add(int a, int b)
//{
//	return a + b;
//}
// 

//代码2
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

//综上，我们可以发现当使用static修饰函数时，编译器会发生链接性错误。

//#define定义常量和宏
//在C语言中常量是一种使用频率很高的量，并且常量常常是不能被改变的。
//#define所定义的便是符号常量


//#define MAX 10000
//
////#define定义宏
//#define Add(x,y)(x+y)
//int main()
//{
//	int sum = Add(2, 3);
//	printf("%d", sum);
//	return 0;
//}

//指针
//1:内存
//内存是计算机特别重要的储存器，内存被划分一个个小小的单元，这是为了程序的高效运行。
//一个单元的大小约为一个字节，每一个内存单元都有他们的地址
//变量占据了内存的一部分，所以变量同样是有地址的

//int main()
//{
//	int a = 10;
//	&a;
//	printf("%p\n", a);
//	return 0;
//}

//地址的储存需要定义指针变量
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












