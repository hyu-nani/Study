#include <iostream>

using namespace std;

char dial[8][4] = {
	{'A', 'B', 'C', '\0'},
	{'D', 'E', 'F', '\0'},
	{'G', 'H', 'I', '\0'},
	{'J', 'K', 'L', '\0'},
	{'M', 'N', 'O', '\0'},
	{'P', 'Q', 'R', 'S'},
	{'T', 'U', 'V', '\0'},
	{'W', 'X', 'Y', 'Z'}
};

int main()
{
	char get[20];
	cin >> get;
	int totalTime = 0;
	int i;
	for (i = 0; get[i] != '\0'; i++)
		for (int j = 0; j < 8; j++)
			for (int k = 0; k < 4; k++)
				if (get[i] == dial[j][k])
					totalTime += j + 3;
	if (i < 2 || i > 15)
		return 0;
	cout << totalTime << endl;
	return 0;
}