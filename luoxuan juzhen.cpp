#include <iostream>
int ar2[10][10];
int sea = 0;

void otto(int n)
{
	int c = 1;
	int sx = 0;
	int sy = 0;

	while (sea < n/2)
	{
		
		for (int i = sx; i < n - 1-sea; i++)
		{
			ar2[sx][i] = c;
			c++;
		}
		for (int i = sy; i < n - 1-sea; i++)
		{
			ar2[i][n - sea - 1] = c;
			c++;
		}
		for (int i = n - sea - 1; i > sx; i--)
		{
			ar2[n - sea - 1][i] = c;
			c++;
		}
		for (int i = n - sea - 1; i > sy; i--)
		{
			ar2[i][sea] = c;
			c++;
		}
		sea++;
		sx++;
		sy++;
	}
	if (n % 2 == 1)
	{
		ar2[sx][sy] = c;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << ar2[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

int main()
{
	int n = 0;
	std::cin >> n;
	otto(n);
	return 0;
}