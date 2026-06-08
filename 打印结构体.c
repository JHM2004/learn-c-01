#include<stdio.h>

struct ren
{
	char fshd[38];
	int sd;
	char sdjfka[38];
};

struct book
{
	struct ren b;
	char name[20];
	int price;
	char id[20];
	struct book* safd;
};

int main()
{
	struct book a = { {"sjafkdj",34,"jfa"},"abcd",46,"kajfdkhdf",NULL };
	struct book* ret = &a;
	printf("%s\n", ret->b.fshd);
	printf("%s\n", a.b.fshd);

	return 0;
}