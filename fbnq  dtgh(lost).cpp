#include <iostream>
#include <vector>

std::vector<int>A;
int u(int n)
{
	n -= 1;
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return u(n - 1);
	}
}
int otto(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return otto(n - 1) + u(n - 1);
	}

}





int main()
{
	int n = 0;
	std::cin >> n;
	std::cout << otto(n) << std::endl;
	return 0;
}