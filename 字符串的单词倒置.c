#include<stdio.h>
#include<string.h>
void reverse(char* left, char* right)
{
	while (left<right)
	{
		int ret = *left;
		*left = *right;
		*right = ret;
		left++;
		right--;
	}
}

int main()
{
	char arr[100] = { 0 };
	printf("请输入要单词倒置的字符串:>");
	gets(arr);
	int len = strlen(arr);
	reverse(arr,arr+len-1);
	char* star = arr;
	while (*star)
	{
		char* end = star;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(star, end - 1);
		if (*end = ' ')
		{
			star = end + 1;
		}
		else
		{
			star = end;
		}
	}
	printf("字符串单词倒置为：%s", arr);
	return 0;
}