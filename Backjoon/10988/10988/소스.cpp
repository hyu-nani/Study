/*
���ĺ� �ҹ��ڷθ� �̷���� �ܾ �־�����. �̶�,
�� �ܾ �Ӹ�������� �ƴ��� Ȯ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
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