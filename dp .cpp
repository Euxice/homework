#include <iostream>
#include <vector>

void dp(int arr[], std::vector<int>& re, int k)//  max ---> min
{
	for (int i = 0,j = k; i <= j;)
	{
		if (arr[i] * arr[i] > arr[j] * arr[j])
		{
			re.push_back(arr[i] * arr[i]);
			i++;
		}
		else {
			re.push_back(arr[j] * arr[j]);
			j--;
		}
	}
	for (int i = 0; i < re.size(); i++)
	{
		std::cout << re[i] << " ";
	}
}


int main()
{
	int arr[5] = { -5,1,2,3,5 };
	std::vector<int> re;
	int k = 4;
	dp(arr, re, k);

	
	return 0;
}