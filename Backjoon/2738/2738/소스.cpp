#include <iostream>

using namespace std;

int matrixA[101][101] = { 0 };
int matrixB[101][101] = { 0 };

int main()
{
	int N, M;
	cin >> N >> M;
	if (N > 100 || M > 100)
		return 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> matrixA[i][j];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> matrixB[i][j];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			matrixA[i][j] += matrixB[i][j];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cout << matrixA[i][j] << " ";
		cout << endl;
	}
	return 0;
}