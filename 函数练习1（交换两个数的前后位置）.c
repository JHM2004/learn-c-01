#include<stdio.h>
void Swap(int* pa, int* pb)
{
	int z;
	z = *pa;
	*pa = *pb;
	*pb = z;
}


int main()
{
	int a = 20;
	int b = 10;
	printf("交换前：%d %d\n", a, b);
	Swap(&a, &b);
	printf("交换后：%d %d", a, b);
	return 0;
}