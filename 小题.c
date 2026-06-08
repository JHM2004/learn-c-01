#include<stdio.h>
int func(int a)
{
	int b;
	switch (a)
	{
	case 1:
		b = 35;
	case 2:
		b = 46;
	case 3:
		b = 38;
	default:
		b = 11;
	}
	return b;
}
int main ()
{
	printf("%d", func(1));
	return 0;
}
