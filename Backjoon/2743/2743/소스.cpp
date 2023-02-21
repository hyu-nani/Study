#include <iostream>

using namespace std;

int main()
{
	char get[101] = "";
	cin >> get;
	int i;
	for (i = 0; get[i] != '\0'; i++)
	{
		if (get[i] < 'A')
			return 0;
		else if (get[i] > 'Z' && get[i] < 'a')
			return 0;
		else if (get[i] > 'z')
			return 0;
	}
	if (i > 100)
		return 0;
	cout << i;
	return 0;
}