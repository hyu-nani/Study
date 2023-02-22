#include <iostream>

using namespace std;
char sentence[101];

int main()
{
	int length;
	do
	{
		cin.getline(sentence, 101);
		cout << sentence << endl;
	} while (sentence[0] != '\0');
	return 0;
}