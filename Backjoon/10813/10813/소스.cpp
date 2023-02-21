#include <iostream>

using namespace std;
int box[100];
int main()
{
	for (int i = 0; i < 100; i++)
		box[i] = i+1;
	int N, M;
	cin >> N >> M;
	if (1 > N || N > 100 || 1 > M || M > 100)
		return 0;
	int i, j, k;
	for (int t = 0; t < M; t++)
	{
		cin >> i >> j;
		i--; j--;
		k = box[i];
		box[i] = box[j];
		box[j] = k;
	}
	for (int t = 0; t < N; t++)
	{
		cout << box[t] << " ";
	}
}