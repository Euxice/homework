#include <iostream>
//#include <string>
#include <vector>
#include <algorithm>
int b = 0;
int A[50];
std::vector<int> path;
int j = 0;


void dfs(int k, int index, int sum)
{
	if (sum > k) { return; }
	if (sum == k)
	{
		std::cout << "[";
		for (int i = 0; i < path.size(); i++)
		{
			std::cout << path[i];
		}
		std::cout << "]" << std::endl;
		return;
	}
	for (int i = index; i < b; i++)
	{
		if (i>0&&A[i]==A[i-1])
		{
			continue;
		}
		
		path.push_back(A[i]);
		
		sum += A[i];
		
		dfs(k, i, sum);
		sum -= A[i];
		path.pop_back();
	}
}


int main()
{
	int a = 0;

	while (std::cin >> a)
	{
		if (a == 0)
		{
			break;
		}
		A[b] = a;
		b++;

	}
	
	std::sort(A, A + b);

	

	int k = 0;
	std::cin >> k;
	dfs(k, 0, 0);
	return 0;
}