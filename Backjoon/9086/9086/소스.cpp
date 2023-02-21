#include <iostream>

using namespace std;

int main()
{
	int T;
	char get[1001] = "";
	cin >> T;
	if (T < 1 || T > 10)
		return 0;
	for (int j = 0; j < T; j++)
	{
		cin >> get;
		char last, first = get[0];
		for (int i = 0; get[i] != '\0'; i++)
			if (get[i] < 'A' || get[i] > 'Z')
				return 0;
			else
				last = get[i];
		cout << first << last << endl;
	}
	return 0;
}