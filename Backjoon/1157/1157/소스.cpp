#include <iostream>

using namespace std;

int alphabet[26] = { 0 };

int main()
{
	char get[1000001];
	cin >> get;
	for (int i = 0; get[i] != '\0'; i++)
	{
		if (get[i] >= 'A' && get[i] <= 'Z')
			alphabet[(get[i] - 65)]++;
		else if (get[i] >= 'a' && get[i] <= 'z')
			alphabet[(get[i] - 97)]++;
	}
	int max = 0;
	int maxnum;
	for (int i = 0; i < 26; i++)
		if (max < alphabet[i])
		{
			max = alphabet[i];
			maxnum = i;
		}
	for (int i = 0; i < 26; i++)
		if (max == alphabet[i] && maxnum != i)
		{
			cout << "?" << endl;
			return 0;
		}
	cout << char(maxnum + 65) << endl;
	return 0;
}