#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//switch,case��䣻���������ܹ���λ������һ��ĵڼ���
//int main()
//{
//	int year, mounth, day;
//	printf("please input the date:");
//	scanf("%d %d %d", &year, &mounth, &day);
//	printf("year=%d mounth=%d day=%d\n", year, mounth, day);
//	int sum = 0;
//	switch (mounth)
//	{
//	case 1:printf("1�·�\n"); sum = 0; break;
//	case 2:printf("2�·�\n"); sum = 28; break;
//	case 3:printf("3�·�\n"); sum = 59; break;
//	case 4:printf("4�·�\n"); sum = 90; break;
//	default:printf("����\n"); break;
//	}
//	sum = sum + day;
//	printf("%d", sum);
//	return 0;
//}

//��ȫƽ����
//��Ŀ��һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ���
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

//���ӳ�������
//���ӵ�һ���ժ�����ɸ��ң���������һ�룬�ֳ���һ�����ڶ������ʣ�µ�һ���ֶ��һ�����Դ������ڣ�ֱ����
//ʮ�컹����ҵ�ʱ�򣬷���ֻʣ��һ�����ˡ�
//���Ƽ���

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






















