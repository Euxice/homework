#include <iostream>
#include <vector>

std::vector<int> A;



int main()
{
	int n = 0;
	std::cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		if (i <= 1)
		{
			A.push_back(1);
		}
		else
		{
			A.push_back(A[i - 1] + A[i - 2]);
		}
	}
	std::cout << A[n - 1] << std::endl;
	return 0;
}