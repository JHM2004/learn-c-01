求两个数的最小公倍数：
法一；
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	while(1)
	{
		int a = 0;
		int b = 0;
		printf("请输入两个整数:>");
		scanf("%d %d", &a, &b);
		int m = a > b ? a : b;
		while (1)
		{
			if (m % a == 0 && m % b == 0)
			{
				printf("最小公倍数为：%d\n", m);
				break;
			}
			m++;
		}
	}
	return 0;
}

法二：
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	while (1)
	{
		int a = 0;
		int b = 0;
		int i = 1;
		printf("请输入两个数：");
		scanf("%d %d", &a, &b);
		for (i = 1;; i++)
		{
			if (i * a % b == 0)
			{
				printf("最小公倍数为：%d\n", i * a);
				break;
			}
		}
	}
	return 0;
}