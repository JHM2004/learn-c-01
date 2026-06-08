#include<stdio.h>
int main()
{
	int arr[3][4] = { {1,2,3,4},{4,5,6},{4,6,7,8} };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
		return 0;
}