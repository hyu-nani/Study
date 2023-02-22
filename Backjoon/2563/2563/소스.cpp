#include <iostream>

using namespace std;
int paper[100][100];
int main()
{
	int N;
	cin >> N;
	int x, y;
	for (int k = 0; k < N; k++)
	{
		cin >> x >> y;
		for (int i = 0; i < 10; i++)
			for (int j = 0; j < 10; j++)
				paper[y + i][x + j] = 1;
	}
	int count = 0;
	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			if (paper[i][j] == 1)
				count++;
	cout << count << endl;
	return 0;
}