#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int N, min, max;
	cin >> N;
	cin >> min;
	max = min;
	int get;
	for (int i = 1; i < N; i++)
	{
		cin >> get;
		if (max < get)
			max = get;
		if (min > get)
			min = get;
	}
	printf("%d %d", min, max);
	return 0;
}