#include <iostream>

int f(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return f(n - 1) + f(n - 2);
	}
}
int main() {
	int n;
	double s = 0;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		s += (f(i) * 1.0 / f(i + 1)*1.0);
		std::cout << i << ":" << s << std::endl;
	}
	return 0;
}