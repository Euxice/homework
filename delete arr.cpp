#include <iostream>

int s_delete(int* arr, int n)
{
	int s = 0;
	int num = 0;
	for (int f = 0; f < 10; f++)
	{
		if (arr[f] == n)
		{
			num++;
		}
		if (arr[f] != n)
		{
			arr[s++] = arr[f];
			//s++;
		}
	}
	return num;
}


int main()
{
	int arr[100];
	for (int i = 0; i < 10; i++)
	{
		std::cin>>arr[i];

	}
	int n = 0;
	std::cin >> n;
	int g =10 - s_delete(arr, n);
	std::cout << g << std::endl;
	for (int i = 0; i < g; i++)
	{
		std::cout<<arr[i]<<" ";
	}
	return 0;
}