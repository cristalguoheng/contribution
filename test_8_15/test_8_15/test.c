#define _CRT_SECURE_NO_WARNINGS


//1.字面常量

//int main()
//{
//	10;
//	3.14;
//	"w";//字符
//	"abc";//字符串
//
//	return 0;
//}

//2.const修饰的常变量
//const修饰的常变量是不可以被改变的
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
//	const int a = 10;//在C语言中，const修饰的是变量但是不能被修改，具有常量的属性，所以叫做常变量
//	printf("a=%d\n", a);
//	//下面证明他是一个变量
//	 //const int n = 10;
//	//int arr[n] = { 0 };
//	return 0;
//}

//#define 定义的标识符常量
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


//枚举常量
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
//常量不可变

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
//	char arr[] = "abcdef";//括号里可以不写数字，这样他就能自动确定后面字符串的大小
//    int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//strlen()是一个库函数，由string和length组成，他可以求出字符串的长度

//int main()
//{
//	printf("hello\0 world");
//  printf("hello world");
//	return 0;
//}
//\0是结束标志


//%c用来输出一个字符
//%s用来输出一个字符串
//%d表示按整形数据的实际长度输出数据
//%x表示以十六进制数形式输出整数


//int main()
//{
//	printf("abc\nd0asdf");
//	return 0;
//}
//

//警报，响铃（\a)
//int main()
//{
//	printf("Beep!\a");
//	return 0;
//}


//退格（\b）
//int main()
//{
//
//	printf("Hello\bWorld");
//
//	return 0;
//}


//制表符（\t）
//int main()
//{
//
//	printf("Name:\tJohn\tAge:\t25");
//	return 0;
//}


//垂直制表符（\v）
//int main()
//{
//	printf("Name:\vJohn\vAge:\v25");
//	return 0;
//}


//回车符（\r）
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


//\ddd,d d d表示1~3个八进制的数字，而\ddd表示该八进制数字所对应的ASC||值
//int main()
//{
//	printf("\130");
//	return 0;
//}


//\xhh,表示两个十六进制数字hh所带表的ASC||值
//int main()
//{
//
//	printf("\x30");
//	return 0;
//}


//三字母词
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

//%d-打印整形
//%s-打印字符串
//%c-打印字符
//%f-打印float类型的数据
//%lf-打印double类型的数据
//%zu-打印sizeof的返回值

//int main()
//{
//	printf("abcdef\n");
//	printf("a\n");
//	printf("\\0\n");
//	printf("c:\\test\\test.c\n");
//	printf("\a\a\a\a\a\a");
//	printf("hell\boworld\n");
//	printf("hello\rworld\n");
//	printf("%c\n", '\130');//八进制--》十进制--》ASCII表
//	printf("%c", '\x30');//十六进制--》十进制--》ASCII表
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

//c语言注释风格
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
//	printf("加入\n");
//	printf("你要好好学习吗0/1？\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("拿到offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	printf("加入\n");
//
//	while (line < 20000)
//	{
//		printf("写代码:%d\n",line);
//		line++;
//	}
//	if (line == 20000)
//	{
//		printf("拿到好offer");
//	}
//	else
//	{
//		printf("继续加油");
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



//if else 语句
//int main()
//{
//	int A = 1;
//	int B = 10;
//	if (A > B)
//	{
//		printf("A好大");
//	}
//	else
//	{
//		printf("A好小");
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
//		printf("早上");
//	}
//	else if (n >= 13 && n <= 18)
//	{
//		printf("下午");
//	}
//	else if (n >= 19 && n <= 24)
//	{
//		printf("晚上");
//	}
//	else
//	{
//		printf("凌晨");
//	}
//	return 0;
//}


//switch ,defult语句
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
//		printf("凌晨\n");
//		break;
//	case 7:
//	case 8:
//	case 9:
//	case 10:
//	case 11:
//	case 12:
//		printf("早上\n");
//		break;
//	case 13:
//	case 14:
//	case 15:
//	case 16:
//	case 17:
//	case 18:
//		printf("下午");
//		break;
//	case 19:
//	case 20:
//	case 21:
//	case 22:
//	case 23:
//	case 24:
//		printf("晚上");
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
//		printf("停止");
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
	printf("请输入三个坐标");
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
		printf("是三角形");
	}
	else
	{
		printf("不是三角形");
	}
	return 0;
}











