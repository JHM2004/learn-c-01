#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int ret= 1;
	printf("请输入一个n:>");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	printf("%d\n",ret );
	return 0;
}