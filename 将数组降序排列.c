void bubble_sort(int arr[], int sz)
{
	int i = 0;                     //sz=10(共10个数需排序)
	for (i = sz - 1; i > 0; i--)  //i=9 8 7 6 5 4 3 2 1 进入(9)个数
	{
		int j = 0;
		for (j = 0; j < i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int ret = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = ret;
			}
		}
	}
}
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i <= 9; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}