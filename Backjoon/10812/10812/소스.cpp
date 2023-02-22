#include <iostream>

using namespace std;

int basket[101];

int main()
{
	for (int t = 0; t < 101; t++)
		basket[t] = t;
	int N, M;
	cin >> N >> M;
	if (1 > N || N > 100 || 1 > M || M > 100)
		return 0;
	int i, j, k;
	for (int t = 0; t < M; t++)
	{
		cin >> i >> j >> k;
		if (1 > i || i > k || k > j || j > N)
			return 0;
		for (int r = 0; r < k - i; r++)
		{
			int save = basket[i];
			for (int e = i; e < j; e++)
				basket[e] = basket[e + 1];
			basket[j] = save;
		}
	}
	for (int t = 1; t < N+1; t++)
		cout << basket[t] << " ";

	return 0;
}