#include <iostream>
#include <string.h>

using namespace std;
char word[101];

int main()
{
	int N, count = 0;
	cin >> N;
	if (N < 1 || 100 < N)
		return 0;
	for (int t = 0; t < N; t++)
	{
		int alphabet[26] = { 0 }; //a-z
		cin >> word;
		alphabet[word[0] - 'a'] = 1;
		if (strlen(word) > 100)
			return 0;
		for (int i = 1; word[i] != '\0'; i++)
		{
			if (word[i] < 'a' || word[i] > 'z')
				return 0;
			if (word[i - 1] != word[i])
				if (alphabet[word[i] - 'a'] == 1)
				{
					count++;
					break;
				}
			alphabet[word[i] - 'a'] = 1;
		}
	}
	cout << N - count << endl;
	return 0;
}