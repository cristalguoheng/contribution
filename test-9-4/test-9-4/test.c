#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int main()
//{
//	double a, b, c;
//	double delta = 0;
//	double x1;
//	double x2;
//	printf("please input a,b,c:");
//	scanf("%f %f %f", &a, &b, &c);
//	delta = b * b - 4 * a * c;
//	if (delta >= 0)
//	{
//		x1 = (-b + sqrt(delta)) / 2;
//		x2 = (-b - sqrt(delta)) / 2;
//		printf("%f %f", &x1, &x2);
//	}
//	else
//		printf("无实数解");
//
//		
//	return 0;
//}

//一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
//int main()
//{
//	int x;
//	int m, n, i, j;
//	for (i = 2; i <= 84; i++)
//	{
//		if (168 % i == 0)
//		{
//			j = 168 / i;
//			if (i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0)
//			{
//				n = (i + j) / 2;
//				m = (i - j) / 2;
//				x = m * m - 100;
//				printf("%d+100=%d*%d\n", x, m, m);
//				printf("%d+268=%d*%d\n", x, n, n);
//
//			}
//		}
//	}
//	return 0;
//}

//题目：企业发放的奖金根据利润提成。
//利润(I)低于或等于10万元时，奖金可提10% ；
//利润高于10万元，低于20万元时，低于10万元的部分按10% 提成，高于10万元的部分，可提成7.5 % ；
//20万到40万之间时，高于20万元的部分，可提成5 % ；
//40万到60万之间时高于40万元的部分，可提成3 % ；
//60万到100万之间时，高于60万元的部分，可提成1.5 % ；
//高于100万元时，超过100万元的部分按1 % 提成。

//int main()
//{
//	double bonus;
//	double i;
//	double bonus1, bonus2, bonus3, bonus4, bonus5;
//	bonus1 = 100000 * 0.1;
//	bonus2 = bonus1 + 100000 * 0.075;
//	bonus3 = bonus2 + 200000 * 0.05;
//	bonus4 = bonus3 + 200000 * 0.03;
//	bonus5 = bonus4 + 400000 * 0.015;
//	scanf("%lf", &i);
//	if (i <= 100000)
//	{
//		bonus = i * 0.1;
//		
//	}
//	else if (i > 100000 && i <= 200000)
//	{
//		bonus = bonus1 + (i - 100000) * 0.075;
//	}
//	else if (i > 200000 && i <= 400000)
//	{
//		bonus = bonus1 + bonus2 + (i - 200000) * 0.05;
//	}
//	else if (i > 400000 && i <= 600000)
//	{
//		bonus = bonus1 + bonus2 +bonus3+ (i - 400000) * 0.03;
//		
//	}
//	else if (i > 600000 && i <= 1000000)
//	{
//		bonus = bonus1 + bonus2 + bonus3 + bonus4+(i - 600000) * 0.015;
//		
//	}
//	else
//	{
//		bonus = bonus1 + bonus2 + bonus3 + bonus4 +bonus5+ (i - 1000000) * 0.01;
//		
//	}
//	printf("%lf", bonus);
//	return 0;
//}

//有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
//int main()
//{
//	int i, j, k;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 4; j++)
//		{
//			for (k = 1; k <= 4; k++)
//			{
//				if (i != j && j != k && i != k)
//				{
//					printf("%d %d %d\n", i, j, k);
//				}
//			}
//		}
//	}
//	return 0;
//}

//题目：输入某年某月某日，判断这一天是这一年的第几天？
//程序分析：以3月5日为例，应该先把前两个月的加起来，
//然后再加上5天即本年的第几天，特殊情况，闰年且输入月份大于3时需考虑多加一天。

//const int daysInmonth[] = { 31,28,31,30,31,30,31,30,31,30,31,30 };
//int main()
//{
//	int days, month, years,i;
//	printf("please input date,such as:2024-8-15\n");
//	if (scanf("%d-%d-%d", &years, &month, &days) != 3 || days > 31 || month > 12 || days < 1)
//	{
//		printf("格式错误");
//		return 1;
//	}
//	int sum = 0;
//	for (int i = 0; i < month - 1; i++)
//	{
//		sum += daysInmonth[i];
//	}
//	sum = sum + days;
//	printf("这是这一年的第%d天", sum);
//	return 0;
//}

//数组求和
//int main()
//{
//	int month = 0;
//	int sum = 0;
//	int monthIndays[] = { 31,28,31,30,31,30,31,30,31,30,31,30 };
//	for (int i = 0; i < 2; i++)
//	{
//		sum += monthIndays[i];
//	}
//	printf("%d", sum);
//	return 0;
//}



//冒泡排序
//#include <stdio.h>

// 交换两个整数的函数
//void swap(int* a, int* b) {//swap为交换函数，temp为临时变量
//    int temp = *a;//先把a值赋值给temp
//    *a = *b;//然后把b值赋给a
//    *b = temp;//最后把a值赋给b
//}//这样一来便实现了a,b的交换
//
//
//void bubbleSort(int arr[], int n) {
//    int i, j;
//    for (i = 0; i < n - 1; i++) {
//        for (j = 0; j < n - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                swap(&arr[j], &arr[j + 1]);
//            }
//        }
//    }
//}
//
//
//void printArray(int arr[], int size) {
//    for (int i = 0; i < size; i++)
//        printf("%d ", arr[i]);
//    printf("\n");
//}
//
//
//int main() {
//    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    printf("排序前的数组为: ");
//    printArray(arr, n);
//
//    bubbleSort(arr, n);
//
//    printf("排序后的数组为: ");
//    printArray(arr, n);
//
//    return 0;
//}


//输入三个整数 x、y、z，请把这三个数由小到大输出
//使用冒泡排序
//void swap(int *a, int *b)
//{
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void bubbleSort(int arr[], int n)
//{
//	int i,j;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				swap(&arr[j], &arr[j + 1]);
//			}
//		}
//	}
//
//}
//
//
//void printArray(int arr[], int size) {
//	for (int i = 0; i < size; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//int main()
//{
//	int arr[] = {2,1,3};
//	int n = sizeof(arr)/ sizeof(arr[0]);
//	printf("排序前的数组为: ");
//	printArray(arr, n);
//	bubbleSort(arr, n);
//	printf("排序后的数组为: ");
//	printArray(arr, n);
//
//	return 0;
//}
//注意：
//int *a此处的*a是指针型变量，他的主要作用是存储地址，在交换函数中他仅仅只是改变了存储的地址，并没有改变该内存里的内容
//n = sizeof(arr)/ sizeof(arr[0])//sizeof(arr)是数组所占内存的总字节数，而sizeof(arr[0])是单个数字所占的字节数
//所以总的意思便是数字的个数




//多组输入#1
//int main()
//{
//	int a, b;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//
//		scanf("%d %d", &a, &b);
//	}
//
//	return 0;
//}

//多组输入#2
//int main()
//{
//	int a, b;
//	while (scanf("%d %d", &a, &b) == 2)
//	{
//		scanf("%d %d", &a, &b);
//	}
//	return 0;
//}

//多组输入#3
//int count = 1;
//int main()
//{int a, b;
//
//	while (scanf("%d %d", &a, &b) != EOF && count < 4)
//	{
//		count++;
//	}
//	return 0;
//}

///多组输入#4
//int a, b;
//int main()
//{
//	while (scanf("%d ", &a) && a != 0)
//	{
//		scanf("%d",  &b);
//	}
//	return 0;
//}

//打印一个C 

//int main() {
//    int rows = 5;  // 你可以调整行数来改变图案的大小  
//    int i, j, spaces;
//
//    // 打印上半部分（直线）  
//    for (i = 0; i < rows / 2; i++) {
//        // 打印空格  
//        for (j = 0; j < rows / 2 + i; j++) {
//            printf(" ");
//        }
//        // 打印星号  
//        for (j = 0; j < rows - 2 * i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    // 打印下半部分（圆弧的近似）  
//    for (i = rows / 2; i < rows; i++) {
//        // 计算空格数  
//        spaces = rows / 2 - i;
//        // 打印空格  
//        for (j = 0; j < spaces; j++) {
//            printf(" ");
//        }
//        // 打印星号  
//        for (j = 0; j < 2 * i - 1; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}





































































































































































































