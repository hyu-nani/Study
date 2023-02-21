#include <iostream>
#include <math.h>
using namespace std;

int last[42] = { 0 };

int main()
{
	int get;
	for (int i = 0; i < 10; i++)
	{
		cin >> get;
		last[(get % 42)] = 1;
	}
	int count = 0;
	for (int i = 0; i < 42; i++)
	{
		if (last[i] == 1)
			count++;
	}
	cout << count << endl;
	return 0;
}