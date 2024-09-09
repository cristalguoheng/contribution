#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//指针
//int main()
//{
//	int a = 10;//向内存申请四个字节，存储10
//	int* p = &a;//p就是指针变量
//	printf("%p\n", &a);//打印出的因该是地址
//	printf("%d\n", sizeof(p));//打印的是指针变量的大小在x64下默认是8，在x86下，默认是4
//	printf("%d\n", *p);//*p指向的就是变量a的值10
//	return 0;
//}

//int main()
//{
//	int i;
//	char* pattern[] = { "*****",
//						"*",
//						"*",
//						"*****"
//
//	};
//	for (i = 0; i < (sizeof(pattern) / sizeof(pattern[0])); i++)
//	{
//		printf("%s\n", pattern[i]);
//	}
//	return 0;
//}


//结构体
//int main()
//{
//	struct stu {
//		char name[20];
//		char sex[5];
//		char id[15];
//		int age;
//	};
//	struct stu s = { "张三","男","201568",20 };
//	pintf("name=%s\n sex=%s\n id=%s\n age=%d\n", s.name, s.sex, s.id, s.age);
//	return 0;
//}

//for循环嵌套
//int main()
//{
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		
//		for (j = 0; j < 3; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}
//打印久久乘法口诀表
//int main()
//{
//	int i,j;
//	
//	for (i = 1; i < 10; i++)
//	{
//		for (j=1;j<=i;j++)
//		{
//			printf("%d*%d=%-4d",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++) {
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//查找二维数组中的最大值
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int max = arr[0][0];
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//			}
//		}
//	}
//	printf("max is:%d\n", max);
//	return 0;
//}

//打印一个倒的直角三角形
//int main()
//{
//	int i, j;
//	for (i = 5; i >0; i--)
//	{
//		for (j = 0; j< i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//打印一个正的直角三角形
//int main()
//{
//	int i, j;
//	for (i = 0; i < 9; i++)
//	{
//		for (j = 0; j<i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//
//	return 0;
//}

//打印杨辉三角
//什么是杨辉三角
//下一行的数字等于上一行的两个数字之和
//int main()
//{
//	int rows = 5;
//	int arr[10][10];
//	int i, j;
//	for (i = 0; i < rows; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || i == j)
//			
//				arr[i][j] = 1;
//			
//			else
//			
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - i][j];
//			
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}




// 函数用于打印杨辉三角的前numRows行  
//void printPascalTriangle(int numRows) {
//    if (numRows <= 0) return;
//
//    // 初始化一维数组，用于存储当前行的杨辉三角数字  
//    int* row = (int*)malloc(numRows * sizeof(int));
//    if (row == NULL) {
//        printf("Memory allocation failed\n");
//        return;
//    }
//
//    // 遍历每一行  
//    for (int i = 0; i < numRows; i++) {
//        // 每一行的第一个元素总是1  
//        row[0] = 1;
//
//        // 打印空格，使杨辉三角居中显示（可选）  
//        for (int space = 0; space < numRows - i - 1; space++) {
//            printf("  ");
//        }
//
//        // 遍历当前行的每个元素（除了最后一个）  
//        for (int j = 1; j <= i; j++) {
//            // 如果是当前行的第一个元素之后，则计算当前元素的值  
//            if (j > 1) {
//                row[j] = row[j - 1] + row[j]; // 注意：这里先保存上一轮的row[j-1]  
//            }
//            // 打印当前元素，并在元素之间添加空格  
//            printf("%4d", row[j - 1]);
//        }
//
//        // 换行，准备打印下一行  
//        printf("\n");
//
//        // 注意：在打印完当前行后，我们需要将row[1]到row[i]的值左移一位，  
//        // 因为下一行会基于当前行的值来计算，但第一个元素始终是1  
//        // 这里通过简单地将row[1]到row[i]的值复制到row[0]到row[i-1]来实现  
//        for (int k = i; k > 0; k--) {
//            row[k] = row[k - 1];
//        }
//    }
//
//    // 释放内存  
//    free(row);
//}
//
//int main() {
//    int numRows;
//    printf("Enter the number of rows for Pascal's Triangle: ");
//    scanf("%d", &numRows);
//    printPascalTriangle(numRows);
//    return 0;
//}

//打印斐波那契数列


























































































