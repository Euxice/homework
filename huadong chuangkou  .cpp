#include <iostream>
#include <vector>

std::vector<int> re;
void hdck(int num[], int t)
{
	int s = 0;
	int i = 0;
	for (int j = 0; j < 6; j++)
	{
		s += num[j];
		while (s >= t)
		{
			s -= num[i];
			re.push_back(j - i + 1);
			i++;
		}
	}
	int a = 100;
	for (int k = 0; k < re.size(); k++)
	{
		if (re[k] < a)
		{
			a = re[k];
		}

	}
	std::cout << a << std::endl;

}


int main()
{
	int t = 7, num[6] = { 2,3,1,2,4,3 };
	hdck(num, t);
	return 0;
}
