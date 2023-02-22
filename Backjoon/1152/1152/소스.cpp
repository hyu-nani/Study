#include <iostream>

using namespace std;

char sentence[1000001];
int main()
{
	int count = 0;
	cin.getline(sentence, 1000001);

	for (int i = 0; sentence[i] != '\0'; i++)
	{
		if (sentence[i] != ' ')
			if(sentence[i + 1] == ' ' || sentence[i+1] == '\0')
				count++;
	}
	cout << count << endl;
	return 0;
}