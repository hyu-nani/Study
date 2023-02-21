#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	long A, B, C;
	cin >> A >> B >> C;
	if (A < 1 ||	
		B < 1 ||	
		C < 1)
		return 0;
	cout << A + B + C << endl;
	return 0;
}