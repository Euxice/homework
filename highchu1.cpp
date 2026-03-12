#include <iostream>


int main()
{
	int t = 0;
	int a[250] = { 0 };
	int b[250] = { 0 };
	std::string A = " ";
	int B = 0;
	std::cin>>A>>B;
	for (int i = 0; i < A.size(); i++)
	{
		if (A[0] == '-')
		{
			A[i + 1] = (A[i + 1] - '0')*-1;
		}
		else
		{
			a[i] = A[i] - '0';
		}
	}
	for (int i = 0; i < A.size(); i++)
	{
		t = t*10 + a[i];
		if (t>=B)
		{
			b[i] = t / B;
			t = t % B;
		}
		else
		{
			b[i] = 0;
		}
	}
	for (int i = 0; i <= A.size(); i++)
	{
		if (b[i] != 0)
		{
			std::cout<<b[i];
		}
	}
	return 0;
}