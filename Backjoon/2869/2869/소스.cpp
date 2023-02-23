#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long A, B, V;
	cin >> A >> B >> V;
	if (1 > B || B >= A || A > V || V > 1000000000)
		return 0;
	long day = 0;

	if ((V - B) % (A - B) == 0)
		day = int((V - B) / (A - B));
	else
		day = int((V - B) / (A - B))+1;

	/* //시간초과
	while (1)
	{
		day++;
		total += A;
		if (total >= V)
			break;
		total -= B;
	}
	*/
	cout << day << endl;
	return 0;
}
/*

1 2 3 4 5
2 2 2 2
1 1 1 

*/