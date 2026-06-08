#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int ret(int ret)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if ((ret >> i) & 1 == 1)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	while (1)
	{
		int n = 0;
		printf("请输入一个数:>");
		scanf("%d", &n);
		int i = ret(n);
		printf("二进制中的1的个数为：%d\n", i);
	}
	return 0;
}