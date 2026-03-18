#include <iostream>
#include <vector>

int n = 0,k = 0;
//int path[5] = { 0 };
//int re[100][3] = { 0 };
std::vector<int> path;

void dfs(int s)
{
	if (path.size() == k)
	{
		std::cout << "[" << path[0] << "," << path[1] << "]" << "," << std::endl;
		return;
	}
	for (int i = s; i <= n; i++)
	{
		path.push_back(i);
		dfs(i+1);
		path.pop_back();
	}
}

int main()
{
	std::cin>>n>>k;
	int strat = 1;
	dfs(strat);
	return 0;
}