#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����ȡ��ֵ
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

//���ʼ���
int main()
{
	char c = 0;
	printf("���������ݣ�");
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
	//	// ��ȡ����  
	//	scanf("%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5);

	//	// �����ַ�  
	//	c1 = encryptChar(c1);
	//	c2 = encryptChar(c2);
	//	c3 = encryptChar(c3);
	//	c4 = encryptChar(c4);
	//	c5 = encryptChar(c5);

	//	// ������ܺ�ĵ���  
	//	printf("%c%c%c%c%c\n", c1, c2, c3, c4, c5);


	//}





































