#include <iostream>
#include <vector>

int n = 0;
int k = 0;
//int a[100];
int A[10] = { 0 };//Ã»±ØÒª
std::vector<int> path;
//std::vector<int> re;
void dfs(int s, int sum)
{
	if (path.size() == k)
	{
		if (sum == n)
		{
			std::cout << "[";
			for (int i = 0; i < path.size(); i++)
			{
				std::cout << path[i] << " ";
			}
			std::cout <<"]"<< std::endl;
			return;
		}
	}
	for (int i = s; i <= 9-(k-path.size())+1; i++)
	{
		sum += A[i];
		path.push_back(A[i]);
		if (A[i] >= n) // ¼ôÖ¦
		{
			goto next;
		}
		dfs(i + 1,sum);
		next:
		sum -= A[i];
		path.pop_back();
		

	}
}

int main()
{
	std::cin >> n >> k;
	for (int i = 1; i <= 9; i++)
	{
		A[i] = i;
	}
	dfs(1,0);

	return 0;
}