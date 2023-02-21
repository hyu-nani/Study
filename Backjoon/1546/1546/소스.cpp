#include <iostream>

using namespace std;

float score[1000] = { 0 };

int main()
{
	float N, max = 0;
	cin >> N;
	if (N <= 1000)
	{
		for (int i = 0; i < N; i++)
		{
			cin >> score[i];
			if (score[i] > 100 || score[i] < 0)
				return 0;
			if (max < score[i])
				max = score[i];
		}
		float total = 0;
		for (int i = 0; i < N; i++)
		{
			score[i] = score[i] / max * 100;
			total += score[i];
		}
		cout << total / N << endl;
	}
	return 0;
}