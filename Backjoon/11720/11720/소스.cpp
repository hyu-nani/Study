#include <iostream>

using namespace std;

int main()
{
	int N, total=0;
	char get[101];
	cin >> N;
	cin >> get;
	for (int i = 0; i < N; i++)
		total += int(get[i]) - 48;
	cout << total << endl;
	return 0;
}