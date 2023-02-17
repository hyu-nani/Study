#include <stdio.h>
#include <iostream>

using namespace std;

int totalPrice, kind, a, b;

int main()
{
	cin >> totalPrice;
	cin >> kind;
	int calPrice = 0;
	for (int i = 0; i < kind; i++)
	{
		cin >> a >> b;
		calPrice += a * b;
	}
	if (calPrice == totalPrice)
		printf("Yes");
	else
		printf("No");
	return 0;
}