#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//ָ��
//int main()
//{
//	int a = 10;//���ڴ������ĸ��ֽڣ��洢10
//	int* p = &a;//p����ָ�����
//	printf("%p\n", &a);//��ӡ��������ǵ�ַ
//	printf("%d\n", sizeof(p));//��ӡ����ָ������Ĵ�С��x64��Ĭ����8����x86�£�Ĭ����4
//	printf("%d\n", *p);//*pָ��ľ��Ǳ���a��ֵ10
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


//�ṹ��
//int main()
//{
//	struct stu {
//		char name[20];
//		char sex[5];
//		char id[15];
//		int age;
//	};
//	struct stu s = { "����","��","201568",20 };
//	pintf("name=%s\n sex=%s\n id=%s\n age=%d\n", s.name, s.sex, s.id, s.age);
//	return 0;
//}

//forѭ��Ƕ��
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
//��ӡ�þó˷��ھ���
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

//���Ҷ�ά�����е����ֵ
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

//��ӡһ������ֱ��������
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

//��ӡһ������ֱ��������
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

//��ӡ�������
//ʲô���������
//��һ�е����ֵ�����һ�е���������֮��
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




// �������ڴ�ӡ������ǵ�ǰnumRows��  
//void printPascalTriangle(int numRows) {
//    if (numRows <= 0) return;
//
//    // ��ʼ��һά���飬���ڴ洢��ǰ�е������������  
//    int* row = (int*)malloc(numRows * sizeof(int));
//    if (row == NULL) {
//        printf("Memory allocation failed\n");
//        return;
//    }
//
//    // ����ÿһ��  
//    for (int i = 0; i < numRows; i++) {
//        // ÿһ�еĵ�һ��Ԫ������1  
//        row[0] = 1;
//
//        // ��ӡ�ո�ʹ������Ǿ�����ʾ����ѡ��  
//        for (int space = 0; space < numRows - i - 1; space++) {
//            printf("  ");
//        }
//
//        // ������ǰ�е�ÿ��Ԫ�أ��������һ����  
//        for (int j = 1; j <= i; j++) {
//            // ����ǵ�ǰ�еĵ�һ��Ԫ��֮������㵱ǰԪ�ص�ֵ  
//            if (j > 1) {
//                row[j] = row[j - 1] + row[j]; // ע�⣺�����ȱ�����һ�ֵ�row[j-1]  
//            }
//            // ��ӡ��ǰԪ�أ�����Ԫ��֮����ӿո�  
//            printf("%4d", row[j - 1]);
//        }
//
//        // ���У�׼����ӡ��һ��  
//        printf("\n");
//
//        // ע�⣺�ڴ�ӡ�굱ǰ�к�������Ҫ��row[1]��row[i]��ֵ����һλ��  
//        // ��Ϊ��һ�л���ڵ�ǰ�е�ֵ�����㣬����һ��Ԫ��ʼ����1  
//        // ����ͨ���򵥵ؽ�row[1]��row[i]��ֵ���Ƶ�row[0]��row[i-1]��ʵ��  
//        for (int k = i; k > 0; k--) {
//            row[k] = row[k - 1];
//        }
//    }
//
//    // �ͷ��ڴ�  
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

//��ӡ쳲���������


























































































