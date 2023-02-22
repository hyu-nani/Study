#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	if (N < 1 || N > 100)
		return 0;
	for (int i = 0; i < N-1 ; i++)
	{
		for (int j = 0; j < N - 1 - i; j++)
			cout << " ";
		for (int j = 0; j < i * 2 + 1; j++)
			cout << "*";
		cout << endl;
	}
	for (int i = N-1; i >= 0; i--)
	{
		for (int j = 0; j < N - 1 - i; j++)
			cout << " ";
		for (int j = 0; j < i * 2 + 1; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}