
#include<stdio.h>
int ret(int i)
{
	int a = 0;
	for (a = 2; a < i; a++)
	{
		if (i % a == 0)
			return 0;
	}
	return 1;
}

int main()
{    
	int count = 0;
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (ret(i) == 1)
		{
			printf("%d ",i);
			count++;
		}
	}
	printf("\n总计count=%d ", count);
	return 0;
}
