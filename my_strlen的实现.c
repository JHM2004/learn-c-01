#include<stdio.h>
#include<assert.h>
char* my_strlen( const char*a, char *b)
{ 
	assert(a != NULL);
	assert(b != NULL);
	char* c = b;
	while (*b++ = *a++)
	{
		;
	}
	return c;
}

int main()
{
	char arr1[] = "hello";
	char arr2[20] = "xxxxxxxxxxx";
	printf("%s", my_strlen(arr1, arr2));
	return 0;

}