void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
				arr[j] ^= arr[i] ^= arr[j] ^= arr[i];
		}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
}