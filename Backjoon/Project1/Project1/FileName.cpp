#include <iostream>
#include "test.h"
using namespace std;

int main()
{
	uint8_t a, b, c;
	sod();
	cin >> a >> b >> c;
	int result = (a-48) ^ (b-48) ^ (c-48);
	cout << result << endl;
	return 0;

}