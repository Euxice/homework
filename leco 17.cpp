#include <iostream>
#include <vector>
#include <string>

std::string s;
std::string le[10] = {
	" ",
	" ",
	"abc",
	"def",
	"ghi",
	"jkl",
	"mno",
	"pqrs",
	"tuv",
	"wxyz"
};
std::vector<char> path;

void dfs(int n,int ind)
{
	if (path.size() == n)
	{

		std::cout << "[";
		for (int i = 0; i < n; i++)
		{
			std::cout << path[i];
		}
		std::cout << "]" << std::endl;
		return;
	}
	int len = le[s[ind]-'0'].size();
	//std::cout << len;
	for (int i = 0; i <len ; i++)
	{
		path.push_back(le[s[ind]-'0'][i]);
		dfs(n,ind+1);
		path.pop_back();


	}
}

int main()
{
	std::cin >> s;
	int n = s.size();
	//std::cout << n << std::endl;
	dfs(n,0);
	return 0;

}

