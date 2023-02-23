#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	if (N < 1 || N > 10000000)
		return 0;
	int j = 1, i = 1, dir = 0, k = 0;
	for (long count = 1; count != N ; count++) // i / j
	{
		if (k)
		{
			if (dir == 0) { i++; j--; if (j == 1) { k = 0; } }
			else if (dir == 1) { i--; j++; if (i == 1) { k = 0; } }
		}
		else
		{
			if (i == 1) { j++; k = 1; dir = 0; }
			else if (j == 1) { i++; k = 1; dir = 1; }
		}
	}
	cout << i << "/" << j << endl;
	return 0;
}
/*  i/j d k
1 = 1/1 0 0
2 = 1/2 0 1
3 = 2/1 0 0
4 = 3/1 1 1
5 = 2/2 1 1
6 = 1/3 1 0
7 = 1/4 0 1

	1  2  6  7  15 16 28
	3  5  8  14 17 27
	4  9  13 18 26
	10 12 19 25
	11 20 24
	21 23
	22

*/