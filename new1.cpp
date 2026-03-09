#include <iostream>
int zf(int m, int n) {
	return n * (n + 1) * (3 * m - n + 1) / 6;
}
int cf(int m, int n) {
	return n * (n + 1) * (m * (m - 1) * 3 + (n - 1) * 2) / 12;
}
int main()
{
	int m, n;
	std::cin >> m >> n;
	//int l = min(m, n);
	std::cout << zf(m, n) << " " << cf(m, n) << std::endl;
	return 0;
}