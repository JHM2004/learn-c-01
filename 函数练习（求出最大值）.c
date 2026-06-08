

//2.让函数返回较大值
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int ret(int x, int y)
{
	int z = 0;
	if (x < y)
		z = y;
	else
		z = x;
	return z;
}



int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a,&b);
	int max = ret(a, b);
	printf("%d", max);
	return 0;
}
