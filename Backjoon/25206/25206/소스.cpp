#include <iostream>
#include <string.h>
using namespace std;

float subTime;
char subject[51];
char grade[9][3] = {
	"F", "D0", "D+", "C0", "C+", "B0", "B+", "A0", "A+",
};


int main()
{
	float totalTime = 0, totalScore = 0;
	for (int t = 0; t < 20; t++)
	{
		char get[3];
		cin >> subject >> subTime >> get;
		
		for (int i = 0; i < 9; i++)
			if (!strcmp(get, grade[i]))
			{
				totalTime += subTime;
				if (i != 0)
				{

					totalScore += subTime * (0.5 + i * 0.5);
				}
			}
	}
	cout << fixed;
	cout.precision(6);
	if (totalScore == 0)
		cout << 0.000000 << endl;
	else
		cout << totalScore / totalTime << endl;
	return 0;
}