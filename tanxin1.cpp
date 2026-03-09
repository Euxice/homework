#include<iostream>
#include<algorithm>

int main()
{
	int n = 0;
	
	
	std::cin >> n;
	int a[100] = { 0 };
	a[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		std::cin >> a[i];
	}
	std::sort(a + 1, a + n + 1);
	
	int s = 0;
	int b[100] = { 0 };
	while (a[1]>-1)
	{
		if (a[1] != 0&&a[n] != 0)
		{
			b[7] = a[2];
			s = b[2]+a[1];
			/*for (int x = 2; x <= n; x++)
			{
				a[x] = a[x + 1];
			}*/
			a[2] = a[3];
			a[3] = a[4];
			a[4] = a[5];
			a[n] = 0;
		}
		if(a[1] != 0&&a[n] == 0)
		{
			
			s = s+a[n-1]+b[7];
			b[n-1] = a[n-1];
			b[n - 2] = a[n - 2];
			a[n - 1] = a[n - 2] = 0;
			b[1] = a[1];
			a[1] = 0;
		}
		if (a[1] == 0)
		{
			s += b[7]*2;
			a[1] =-1;
			break;
		}
		
	}


	std::cout << s << std::endl;
}