#include <iostream>

using namespace std;

int main()
{
	char S[101];
	int T, R;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> R >> S;
		for (int j = 0; S[j] != '\0'; j++)
			for (int k = 0; k < R; k++)
				cout << S[j];
		cout << endl;
	}
	return 0;
}