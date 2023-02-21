#include <iostream>

using namespace std;

int main()
{
	int alphabet[26];
	for (int i = 0; i < 26; i++)
		alphabet[i] = -1;
	char get[101];
	cin >> get;
	for (int i = 0; get[i] != '\0'; i++)
		if (get[i] < 'a' || get[i] > 'z')
			return 0;
		else
			if(alphabet[(get[i] - 'a')] == -1)
				alphabet[(get[i] - 'a')] = i;
	for (int i = 0; i < 26; i++)
		cout << alphabet[i] << " ";
	return 0;

}