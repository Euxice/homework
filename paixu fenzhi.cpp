#include <iostream>
#include <vector>
#include <algorithm>


int A[500] = { 0 };



//void z_swap(int a, int b)
//{
//	int c = 0;
//	c = A[a];
//	A[a] = A[b];
//	A[b] = c;
//}



void fz(int left, int right)
{
	int mid = (left + right) / 2;
	int i = left;
	int j = right;
	int p = A[mid];
	while (i<= j)
	{
		while (A[i] < p) i++;
		while (A[j] > p) j--;
		if (i <= j)
		{
			std::swap(A[i],A[j]);
			i++;
			j--;
		}

	}
	if (left < j) fz(left, j);
	if (right > i) fz(i, right);


}
int main()
{
	//int a = 0;
	for (int i = 0; i < 10; i++)
	{
		std::cin >> A[i];
	}
	int left = 0;
	int right = 9;
	fz(left, right);
	for (int i = 0; i < 10; i++)
	{
		std::cout << A[i] << " ";
	}
	return 0;
}