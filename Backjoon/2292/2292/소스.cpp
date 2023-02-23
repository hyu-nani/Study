#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long N;
	cin >> N;
	if (N < 1 || N > 1000000000)
		return 0;
	long t = 0, i;
	for (i = 1 ; i < 1000000 ; i++)
	{
		if (N < t + 2)
			break;
		t += i * 6;
	}
	cout << i << endl;
	return 0;
}		
/*  
1		0
#2
2~7		6
#3
8~19	12
#4
20~37	18
#5
38~61	24
*/
