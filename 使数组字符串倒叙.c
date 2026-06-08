#include<stdio.h>

int my_strlen(char* ret)
{
	int count = 0;
	while(*ret != '\0')
	{
		count++;
		ret++;
	}
	return count;
}

void turn_updown(char*ret)
{
	int left = 0;
	int right = my_strlen(ret)-1;
	while (left < right)
	{
		int re = ret[left];
		ret[left] = ret[right];
		ret[right] = re;
		left++;
		right--;
	}
}

int main()
{
	char arr[] = "abcdef";
	turn_updown(arr);
	printf("%s\n", arr);
	return 0;
}