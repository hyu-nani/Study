#include <iostream>

using namespace std;

int box[100] = { 0 };

int main()
{
	int N, M;
	cin >> N >> M;
	if (N < 1 || N > 100)
		return 0;
	if (M < 1 || M > 100)
		return 0;
	int i, j, k;
	for (int t = 0; t < M; t++)
	{
		cin >> i >> j >> k;
		if (i < 1 || i > j || j > N)
			return 0;
		if (k < 1 || k > N)
			return 0;
		for (int p = i-1; p <= j-1; p++)
			box[p] = k;
	}
	for (int t = 0; t < N; t++)
		cout << box[t] << " ";
	return 0;
}