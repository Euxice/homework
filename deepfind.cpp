#include <iostream>
int n = 0;
bool A[10][10];
int s;
int path[101][5];
int dx[5] = { 0,0,1,0,-1 };
int dy[5] = { 0,1,0,-1,0 };
void print_path(int k) {
	s++;
	for (int i = 1; i <=k; i++)
	{
		std::cout<<path[i][1]<<"," << path[i][2] <<"->";
	}
	std::cout << "end" << std::endl;;
}

void dfs(int x, int y, int k)
{
	path[k][1] = x;
	path[k][2] = y;
	if (x == n && y == n)
	{
		print_path(k);
		return;
	}
	for (int i = 0; i < 5; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && nx <= n && ny >= 0 && ny <= n && A[nx][ny] == false)
		{
			A[nx][ny] = true;
			dfs(nx, ny, k + 1);
			A[nx][ny] = false;
			path[k + 1][1] = 0;
			path[k + 1][2] = 0;
		}
	}

}

int main()
{
	std::cin >> n;
	A[0][0] = true;
	dfs(0, 0, 1);
	std::cout << "一共有" << s << "种走法" << std::endl;
	return 0;
}