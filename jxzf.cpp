#include <iostream>



int main()
{
	int n, m;
	std::cin >> n >> m;
	int a = (n*(n+1)/2)*(m*(m+1)/2);
	int x = std::min(n, m);
	std::cout << x<<a;

	int zf = 0;
	for (int i = 0; i < x; i++)
	{
		zf += (m - i) * (n - i);
	}
	std::cout << "正方形数量：" << zf << " " << "长方形数量：" << a - zf << std::endl;
	return 0;
}