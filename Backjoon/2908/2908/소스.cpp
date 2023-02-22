#include <iostream>

using namespace std;

int main()
{
	char A[4], B[4];
	cin >> A >> B;
	char i = A[0],	j = B[0];
	A[0] = A[2];	B[0] = B[2];
	A[2] = i;		B[2] = j;
	int a, b;
	a = (A[0] - 48) * 100 + (A[1] - 48) * 10 + (A[2] - 48);
	b = (B[0] - 48) * 100 + (B[1] - 48) * 10 + (B[2] - 48);
	if (a > b)
		cout << a;
	else
		cout << b;
	return 0;
}