#include <iostream>
#include <cmath>

using namespace std;

int score[1001];

int main()
{
	float C, N;
	cin >> C;
	for (int t = 0; t < C; t++)
	{
		cin >> N;
		if (N < 1 || 1000 < N)
			return 0;
		float total = 0, average;
		for (int i = 0; i < N; i++)
		{
			cin >> score[i];
			if (score[i] < 0 || score[i] > 100)
				return 0;
			total += score[i];
		}
		average = total / N;
		int count = 0;
		for (int i = 0; i < N; i++)
			if (score[i] > average)
				count++;
		cout.setf(ios::fixed);
		cout.precision(3);
		cout << count / N * 100<< "%" << endl;
		for (int i = 0; score[i] != '\0'; i++)
			score[i] = '\0';
	}
	return 0;
}