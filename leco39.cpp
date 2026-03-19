#include <iostream>
#include <vector>

int A[50];
std::vector<int> path;
int b = 0;
void dfs(int k,int n,int u )
{
	if (n > k) { return; }
	if (n == k)
	{
		std::cout << "[";
		for (int i = 0; i < path.size(); i++)
		{
			std::cout << path[i] << " ";
		}
		std::cout << "]" << std::endl;
		return;
	}
	for (int i = u; i < b; i++)
	{
		path.push_back(A[i]);
		n += A[i];
		dfs(k, n, i);
		n -= A[i];
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
	
	int k = 0;
	std::cin >> k;
	dfs(k,0,0);
	return 0;
}