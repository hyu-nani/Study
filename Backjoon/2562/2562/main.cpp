#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int get, num=1, max;
	cin >> max;
	for (int i = 1; i < 9; i++)
	{
		cin >> get;
		if (max < get)
		{
			num = i+1;
			max = get;
		}
	}
	if (max >= 100)
		return 0;
	printf("%d\n%d", max, num);
	return 0;
}