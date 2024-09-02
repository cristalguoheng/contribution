#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//switch,case语句；输入日期能够定位到是这一年的第几天
//int main()
//{
//	int year, mounth, day;
//	printf("please input the date:");
//	scanf("%d %d %d", &year, &mounth, &day);
//	printf("year=%d mounth=%d day=%d\n", year, mounth, day);
//	int sum = 0;
//	switch (mounth)
//	{
//	case 1:printf("1月份\n"); sum = 0; break;
//	case 2:printf("2月份\n"); sum = 28; break;
//	case 3:printf("3月份\n"); sum = 59; break;
//	case 4:printf("4月份\n"); sum = 90; break;
//	default:printf("假期\n"); break;
//	}
//	sum = sum + day;
//	printf("%d", sum);
//	return 0;
//}

//完全平方数
//题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少
//int main()
//{
//	int i, j, m, n, x;
//	for (i = 2; i < 168 / 2; i++)
//	{
//		if (168 % i == 0)
//		{
//			j = 168 / i;
//			if (i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0)
//			{
//				m = (i + j) / 2;
//				n = (i - j) / 2;
//				x = n * n - 100;
//				
//				printf("%d+100=%d*%d\n", x, n, n);
//				printf("%d+100+168=%d*%d\n", x, m, m);
//			}
//		}
//	}
//	return 0;
//}

//猴子吃桃问题
//猴子第一天采摘了若干个桃，立即吃了一半，又吃了一个，第二天吃了剩下的一半又多吃一个，以此类推在，直到第
//十天还想吃桃的时候，发现只剩下一个桃了。
//倒推即可

//int main()
//{
//	int x = 1;
//	int y = 0;
//	int day = 0;
//	for (day = 9; day >= 1; day--)
//	{
//		y = (x + 1) * 2;
//		x = y;
//	}
//	printf("%d\n", y);
//	return 0;
//}






















