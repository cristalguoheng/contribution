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
//		printf("��ʵ����");
//
//		
//	return 0;
//}

//һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
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

//��Ŀ����ҵ���ŵĽ������������ɡ�
//����(I)���ڻ����10��Ԫʱ���������10% ��
//�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10% ��ɣ�����10��Ԫ�Ĳ��֣������7.5 % ��
//20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5 % ��
//40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3 % ��
//60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5 % ��
//����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1 % ��ɡ�

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

//�� 1��2��3��4 �ĸ����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
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

//��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
//�����������3��5��Ϊ����Ӧ���Ȱ�ǰ�����µļ�������
//Ȼ���ټ���5�켴����ĵڼ��죬��������������������·ݴ���3ʱ�迼�Ƕ��һ�졣

//const int daysInmonth[] = { 31,28,31,30,31,30,31,30,31,30,31,30 };
//int main()
//{
//	int days, month, years,i;
//	printf("please input date,such as:2024-8-15\n");
//	if (scanf("%d-%d-%d", &years, &month, &days) != 3 || days > 31 || month > 12 || days < 1)
//	{
//		printf("��ʽ����");
//		return 1;
//	}
//	int sum = 0;
//	for (int i = 0; i < month - 1; i++)
//	{
//		sum += daysInmonth[i];
//	}
//	sum = sum + days;
//	printf("������һ��ĵ�%d��", sum);
//	return 0;
//}

//�������
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



//ð������
//#include <stdio.h>

// �������������ĺ���
//void swap(int* a, int* b) {//swapΪ����������tempΪ��ʱ����
//    int temp = *a;//�Ȱ�aֵ��ֵ��temp
//    *a = *b;//Ȼ���bֵ����a
//    *b = temp;//����aֵ����b
//}//����һ����ʵ����a,b�Ľ���
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
//    printf("����ǰ������Ϊ: ");
//    printArray(arr, n);
//
//    bubbleSort(arr, n);
//
//    printf("����������Ϊ: ");
//    printArray(arr, n);
//
//    return 0;
//}


//������������ x��y��z���������������С�������
//ʹ��ð������
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
//	printf("����ǰ������Ϊ: ");
//	printArray(arr, n);
//	bubbleSort(arr, n);
//	printf("����������Ϊ: ");
//	printArray(arr, n);
//
//	return 0;
//}
//ע�⣺
//int *a�˴���*a��ָ���ͱ�����������Ҫ�����Ǵ洢��ַ���ڽ���������������ֻ�Ǹı��˴洢�ĵ�ַ����û�иı���ڴ��������
//n = sizeof(arr)/ sizeof(arr[0])//sizeof(arr)��������ռ�ڴ�����ֽ�������sizeof(arr[0])�ǵ���������ռ���ֽ���
//�����ܵ���˼�������ֵĸ���




//��������#1
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

//��������#2
//int main()
//{
//	int a, b;
//	while (scanf("%d %d", &a, &b) == 2)
//	{
//		scanf("%d %d", &a, &b);
//	}
//	return 0;
//}

//��������#3
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

///��������#4
//int a, b;
//int main()
//{
//	while (scanf("%d ", &a) && a != 0)
//	{
//		scanf("%d",  &b);
//	}
//	return 0;
//}

//��ӡһ��C 

//int main() {
//    int rows = 5;  // ����Ե����������ı�ͼ���Ĵ�С  
//    int i, j, spaces;
//
//    // ��ӡ�ϰ벿�֣�ֱ�ߣ�  
//    for (i = 0; i < rows / 2; i++) {
//        // ��ӡ�ո�  
//        for (j = 0; j < rows / 2 + i; j++) {
//            printf(" ");
//        }
//        // ��ӡ�Ǻ�  
//        for (j = 0; j < rows - 2 * i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    // ��ӡ�°벿�֣�Բ���Ľ��ƣ�  
//    for (i = rows / 2; i < rows; i++) {
//        // ����ո���  
//        spaces = rows / 2 - i;
//        // ��ӡ�ո�  
//        for (j = 0; j < spaces; j++) {
//            printf(" ");
//        }
//        // ��ӡ�Ǻ�  
//        for (j = 0; j < 2 * i - 1; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}





































































































































































































