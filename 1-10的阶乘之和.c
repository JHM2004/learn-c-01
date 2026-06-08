#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 0;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret *= i;
		}
		sum += ret;
	}
	printf("%d", sum);
	return 0;
    说明：
    #include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 0;//阶乘
	int sum = 0;//阶乘的相加
	for (n = 1; n <= 10; n++)//最原始数值 循环进入
	{
		ret = 1;
		for (i = 1; i <= n; i++)//出阶乘
		{
			ret *= i;//阶乘
		}
		sum += ret;//阶乘的相加
	}
	printf("%d", sum);
	return 0;
}

改进：
#include<stdio.h>
int main()
{
	int i = 0;
    int ret = 1;
    int sum = 0;
     for (i = 1; i <= 10; i++)
   {
	  ret *= i;
	  sum += ret;
   }
   printf("%d", sum);
   return 0;
}