#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
//int main()
//{
//
//    char a = 176, b = 219;
//    SetConsoleOutputCP(437);
//    printf("%c%c%c%c%c\n", b, a, a, a, b);
//    printf("%c%c%c%c%c\n", a, b, a, b, a);
//    printf("%c%c%c%c%c\n", a, a, b, a, a);
//    printf("%c%c%c%c%c\n", a, b, a, b, a);
//    printf("%c%c%c%c%c\n", b, a, a, a, b);
//	return 0;
//}

//int main()
//{
//	int i, j;
//	for (i = 0; i < 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

//int main()
//{
//    int i, j;
//    SetConsoleOutputCP(437);
//    for (i = 0; i < 8; i++)
//    {
//        for (j = 0; j < 8; j++)
//            if ((i + j) % 2 == 0)
//                printf("%c%c", 219, 219);
//            else printf("  ");
//        printf("\n");
//    }
//    return 0;
//}

//int main()
//{
//	SetConsoleOutputCP(437);
//	
//	int i, j;
//	printf("%c%c\n",1,1);
//	for (i = 0; i < 9; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c%c", 219, 219);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d\n", b);
//	return 0;
//}

//杨辉三角
//第一行的第一个元素为1
// 第几行就有几个元素
// 从第三行开始，第二列的元素等于第二行的第一列元素和第二列元素和（排除首尾元素）
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1 
//1 5 10 10 5 1

//int main()
//{
//	int arr[10][10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//	}
//	for (int i = 2; i < 10; i++)
//	{
//		for (int j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i, j;
//	SetConsoleOutputCP(437);
//	printf("\1\1\n");
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			printf("%c%c", 219, 219);
//		}
//		printf("\n");
//	}
//
//
//
//
//	return 0;
//}

//int main()
//{
//	SetConsoleOutputCP(437);
//	printf("\1\1\n");//对于有些编译器笑脸是显示空格或方块
//	return 0;
//}

//斐波那契数列（兔子生育问题）
//1,1,2,3,5,8,13,21......
//下一个月的兔子数等于前两个月的兔子数量和
//int main()
//{
//	int a = 1, b = 1, temp, i;
//	printf("%12d %12d", a, b);
//	for (i = 3; i <= 20; i += 2)
//	{
//		temp = a + b;
//		printf("%12d\n", temp);
//		b = temp;
//		a = b;
//		temp = a + b;
//		b = temp;
//		a = b;
//	}
//	return 0;
//}

//int main()
//{
//	int i, j,count=0;
//	for (i = 101; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//			if (j >= i)
//			{
//				count++;
//				printf("%d  ", i);
//				if (count % 5 == 0)
//				printf("\n");	
//			}	
//	}
//	return 0;
//}

//int main()
//{
//	int x, y, z, i;
//	for (i = 100; i <= 999; i++)
//	{
//		x = i % 10;
//		y = (i / 10) % 10;
//		z = i / 100;
//		int sum = x * x * x + y * y * y + z * z * z;
//		if (i == sum)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

int main()
{
	int n, i;
	printf("请输入一个整数：\n");
	scanf("%d", &n);
	printf("%d=",n);
	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			printf("%d", i);
			n /= i;
			if (n != 1)
			{
				printf("*");
			}
		}
	}
	printf("\n");
	return 0;
}
















































































