#include<iostream>
#include<cmath>
#include<string>

int main()
{
	std::string A = " ";
	int B = 0;
	int n = 0;
	std::cin >> A >> B >> n;
	int a[250] = { 0 };
	int t = 0;
	for (int i = 0; i < A.size(); i++)
	{
		a[i] = A[i] - '0';
		//v += (a[i] * std::pow(10, i));
	}
	int v = std::stoi(A);
	a[0] = v / B;
	
	t = v % B;
	std::cout << a[0]<<'.';
	for (int i = 1; i <= n; i++)
	{
		a[i] = t * 10 / B;
		t = t * 10 % B;
		std::cout << a[i];
	}

	return 0;
}