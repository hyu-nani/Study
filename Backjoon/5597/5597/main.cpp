#include <stdio.h>
#include <iostream>

using namespace std;
int student[30] = { 0 };
int main()
{
	int get;
	for (int i = 0; i < 28; i++)
	{
		cin >> get;
		student[get-1] = 1;
	}
	for (int i = 0; i < 30; i++)
		if (student[i] == 0)
			cout << i+1 << endl;
	return 0;
}