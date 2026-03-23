#include <iostream>
#include <vector>

std::vector<char> path;
char A[100];
int b = 0;

bool hw(std::vector<char> p)
{
	int n = 0;
	for (int i = 0; i <= p.size(); i++)
	{
		if (p[0 + i] == A[p.size() - 1-i])
		{
			n++;
		}
	}
	if (n == p.size()-1)
	{
		return true;
	}
	else
		return false;
}

void dfs(int s)
{
	if (hw(path))
	{
		for (int i = 0; i < path.size(); i++)
		{
			std::cout << path[i];
		}
		std::cout << "|" << std::endl;
		return;
	}
	for (int i = s; i < b; i++)
	{
		path.push_back(A[i]);
		dfs(i + 1);
		path.pop_back();
	}
}


int main()
{
	char a = 0;

	while (std::cin >> a)
	{
		if (a == '0')
		{
			break;
		}
		A[b] = a;
		b++;

	}
	dfs(0);
	return 0;
}