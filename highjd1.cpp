#include <iostream>


int lex(int a[],int len)
{
	int lex = 0;
	for (int i = len - 1; i >= 0; i--)
	{
		if (a[i] != 0)
		{
			lex = i;
			break;
		}
	}
	return lex;
}

int LEM(int a[], int len, std::string u, std::string s)
{
	int IN = 0;
	int LEN = s.size() + u.size();
	for (int i = len; i > LEN; i--)//一定不能i>=len，会吞单位
	{
		if (a[i] != 0)
		{
			IN = i;
			break;
		}
	}
	return IN;
}
void cheng(int a[], int s1[], int s2[], int len, std::string s, std::string u)
{
	for (int i = 0; i < s.size(); i++)
	{
		for (int j = 0; j < u.size(); j++)
		{
			a[i + j] = a[i+j]+s1[i] * s2[j];
			if (a[i + j] > 9)
			{
				a[i + j + 1] += a[i + j] / 10;
				a[i + j] %= 10;
			}
		}
	}
	
	for (int i = LEM(a, len, s, u)+1; i  >= 0; i--)
	{
		std::cout << a[i];
	}
}
void jian(int a[],int s1[],int s2[], int len)
{
	for (int i = 0; i < len; i++)
	{
		a[i] = s1[i] - s2[i];
		
		if (a[i] < 0&&s1[i+1]!= 0)
		{
			
			a[i] += 10;
			s1[i+1] -= 1;
		}
		else if (a[i] < 0 && s1[i + i] == 0)
		{
			a[i - 1] = 10 * a[i] + a[i - 1];
			a[i] = NULL;
		}
		//else if(a[i])
		
		/*a[i] = s1[i] - s2[i];
		if (a[i - 1] < 0 && a[i] != 0)
		{
			a[i - 1] += 10;
			a[i] -= 1;
		}
		else if (a[i - 1] < -9 && a[i] == 0)
		{
			a[i] -= 1;
			a[i - 1] += 10;
		}
		else if (i == len - 1)
		{
			a[i] = s1[i] - s2[i];
			if (a[i] > 0)
			{
				a[0] += 1;
			}
			else if (a[i] < 0)
			{
				a[0] -= 1;
			}
		}*/

	}
	
	for (int i = lex(a,len); i >= 0; i--)
	{

		if (i < lex(a,len) && a[i] < 0)
		{
			//a[i] = a[i] * a[i] / (-a[i]);
			a[i] = a[i] * (-1);
			std::cout << a[i];
		}
		else
		{
			std::cout << a[i];
		}
	}

}
void jia(int a[], int s1[], int s2[], int len)
{
	for (int i = 0; i < len; i++)
	{
		a[i] = s1[i] + s2[i];
		if (a[i] > 9)
		{
			a[i + 1] += a[i] / 10;
			a[i] %= 10;
		}

	}
	for (int i = len; i >= 0; i--)
	{
			std::cout << a[i];
	}

}

void otto(int c)
{
	int bvm[50000] = { 0 };
	bvm[0] = 2;
	for (int i = 0; i < c; i++)
	{
		bvm[0] = bvm[0] * 2;
		
	}
	int um2 = 0;
	for (int i = 50000; i >= 0; i--)
	{
		if (bvm[i] != 0)
		{
			um2 = i;
			break;
		}
	}
	for (int i = 0; i < um2; i++)
	{
		if (bvm[i] > 9)
		{
			bvm[i + 1] = bvm[i] / 10;
			bvm[i] %= 10;
		}
		std::cout << bvm[i] << std::endl;
	}
}

int main()
{
	char n;
	std::cin >> n;
	if (n == '2n');
	{
		int c;
		std::cin >> c;
		otto(c);
	}
	int s1[500] = {0}, s2[500] = {0}, a[500] = {0};
	char f;
	std::string s, u;
	std::cin >> s;
	std::cin >> f;
	std::cin >> u;
	for (int i = 0; i < s.size(); i++)
	{
		s1[s.size() - i - 1] = s[i] - '0';
	}
	for (int i = 0; i < u.size(); i++)
	{
		s2[u.size() - i - 1] = u[i] - '0';
	}
	int len = s.size();
	if (a[len] != 0) {
		len++;
	}

	if (len < u.size())
	{
		len = u.size();
	}
	LEM(a, len, s, u);
	if (f == '+')
	{
		jia(a, s1, s2, len);
	}
	else if (f == '-')
	{
		jian(a, s1, s2, len);
	}
	else if (f == '*')
	{
		cheng(a, s1, s2, len, s, u);
	}


	
	
	return 0;
}