#include <iostream>

using namespace std;

int hotel[101][101];

int main()
{
	int T, H, W, N;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		cin >> H >> W >> N;
		if (1 > H || 1 > W || H >= 100 || W >= 100)
			return 0;
		if (1 > N || N > H * W)
			return 0;
		int floor, room;

		
		if (N == H * int(N / H))
			floor = H;
		else
			floor = N - H * int(N / H);
		
		if ( N % H != 0)
			room = int(N / H) + 1;
		else
			room = N / H;

		if (room < 10)
			cout << floor << "0" << room << endl;
		else
			cout << floor << room << endl;
	}
	return 0;
}
/*
5
6 12 10
30 50 72
1 11 11
11 1 11
2 5 10

402
1203
111
1101
205
*/