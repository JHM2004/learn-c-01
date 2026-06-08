#include<stdio.h>

int is_leap_year(int n)
{
	return n % 4 == 0 && n % 100 != 0 || n % 400 == 0;
}

int main()
{
	int n = 0;
	for (n = 1000; n <= 2000; n++)
	{
		int m = is_leap_year(n);
		if (m == 1)
			printf("%d ", n);
	}
	return 0;
}
