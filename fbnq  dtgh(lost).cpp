#include <iostream>
#include <vector>

std::vector<int>A;

int co = 0;
int u(int n)
{
	
	if (n <= 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return co+=u(n - 1);
	}
}

int ci = 0;

int otto(int n)
{
	if (n == 1)
	{
		return  1;
	}
	else
	{
		return ci = otto(n - 1) + u(n - 1);
	}

}





int main()
{
	int n = 0;
	std::cin >> n;
	std::cout << otto(n) << std::endl;
	return 0;
}