#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//三数取最值
//int main()
//{
//	int a, b, c, max;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		if (a > c)
//		{
//			max = a;
//		}
//		else
//			max = c;
//
//	}
//	else
//	{
//		if (b > c)
//		{
//			max = b;
//		}
//		else
//			max = c;
//	}
//		
//	printf("%d", max);
//
//	return 0;
//}

//单词加密
int main()
{
	char c = 0;
	printf("请输入数据：");
	c=getchar();
	while (c != '\n')
	{
		if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
		{
			if (((c >= 'W') && (c <= 'Z')) || ((c >= 'w') && (c <= 'z')))
			{
				c = c - 22;
			}
			else
			{
				c = c + 4;
			}
		}
		printf("%c", c);
		c = getchar();
	}
	return 0;
}

//int main()
//{
//	char c = 0;
//	c = getchar();
//	while (c != '\n')
//	{
//		if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
//		{
//			c = c + 4;
//		}
//		printf("%c", c);
//		c = getchar();
//	}
//	return 0;
//}


	//char encryptChar(char c)
	//{
	//	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
	//	{
	//		if (((c >= 'W') && (c <= 'Z')) || ((c >= 'w') && (c <= 'z')))
	//		{
	//			c = c - 22;
	//		}
	//		else
	//		{
	//			c = c + 4;
	//		}
	//	}
	//	return c;
	//}
	//int main()
	//{
	//	char c1, c2, c3, c4, c5;
	//	// 读取输入  
	//	scanf("%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5);

	//	// 加密字符  
	//	c1 = encryptChar(c1);
	//	c2 = encryptChar(c2);
	//	c3 = encryptChar(c3);
	//	c4 = encryptChar(c4);
	//	c5 = encryptChar(c5);

	//	// 输出加密后的单词  
	//	printf("%c%c%c%c%c\n", c1, c2, c3, c4, c5);


	//}





































