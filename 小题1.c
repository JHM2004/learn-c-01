//1.
//#include<stdio.h>
//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1:
//		b = 35;
//	case 2:
//		b = 46;
//	case 3:
//		b = 38;
//	default:
//		b = 11;
//	}
//	return b;
//}
//int main ()
//{
//	printf("%d", func(1));
//	return 0;
//}


//2.
//#include<stdio.h>
//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)
//		{
//		case 1:
//			printf("first");
//		case 2:
//			printf("second");
//			break;
//		default :
//			printf("hello\n");
//		}
//	case 2:
//		printf("third");
//
//	}
//	return 0;
//}



//3.排序;由大到小输出
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int ret = a;
//		a = b;
//		b = ret;
//	}
//	if (a < c)
//	{
//		int ret = a;
//		a = c;
//		c = ret;
//	}
//	if (b < c)
//	{
//		int ret = b;
//		b = c;
//		c = ret;
//	}
//	printf("%d %d %d ", a ,b ,c);
//	return 0;
//}


////4.判断是否是三的倍数：
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i=1;i<=100;i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}




//5.求最大公约数；
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数:>");
//	scanf("%d %d", &a ,& b);
//	int max = 0;
//	if (a < b)
//		max = a;
//	else
//		max = b;
//	while (1)
//	{
//		if (a % max == 0 && b % max == 0)
//		{
//			printf("最大公约数为:%d", max);
//			break;
//		}
//		max--;
//
//	}
//	return 0;
//}

