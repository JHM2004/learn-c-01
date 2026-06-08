#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double Pow(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else if (k > 0)
	{
		return n * Pow(n , k-1);
	}
	else
	{
		return 1.0 / Pow(n, -k);
	}
}

int main()
{
	int n = 0;
	int k = 0;
	printf("请输入n和k:>");
	scanf("%d %d", &n,&k);
	double z=Pow(n, k);
	printf("%lf\n", z);
	return 0;
}