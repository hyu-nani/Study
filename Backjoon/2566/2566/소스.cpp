#include <iostream>

using namespace std;
int matrix[9][9] = { 0 };

int main()
{
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
		{
			cin >> matrix[i][j];
			if (matrix[i][j] > 100)
				return 0;
		}
	int max = 0, x = 0, y = 0;
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			if (max < matrix[i][j])
			{
				max = matrix[i][j];
				y = i; x = j;
			}
	cout << max << endl;
	cout << y + 1 << " " << x + 1 << endl;
}