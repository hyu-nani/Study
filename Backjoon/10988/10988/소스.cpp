/*
알파벳 소문자로만 이루어진 단어가 주어진다. 이때,
이 단어가 팰린드롬인지 아닌지 확인하는 프로그램을 작성하시오.
*/

#include <iostream>

using namespace std;

char word[101];

int main()
{
	cin >> word;
	int length, start=0;
	for (length = 0; word[length] != '\0'; length++)
		if ('a' > word[length] || word[length] > 'z')
			return 0;
		else if (word[length] == ' ' && word[length + 1] != ' ')
			start = length;
	if (1 > length - start || length - start > 100)
		return 0;
	for (int i = start; i < length / 2; i++)
	{
		if (word[i] != word[length - i - 1])
		{
			cout << "0" << endl;
			return 0;
		}
	}
	cout << "1" << endl;
	return 0;
}