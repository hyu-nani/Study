#include <iostream>
#include <string.h>
using namespace std;

char word[101];
char alphabet[8][4] = {
	"c=",
	"c-",
	"dz=",
	"d-",
	"lj",
	"nj",
	"s=",
	"z=",
};
int main()
{
	cin >> word;
	int count = 0;
	bool find;
	for (int i = 0; word[i] != '\0'; i++)
	{
		find = false;
		for (int j = 0; j < 8; j++)
		{
			char cmp[4] = "";
			for (int k = 0; k < strlen(alphabet[j]); k++)
				cmp[k] = word[i + k];
			if (!strcmp(cmp, alphabet[j]))
			{
				count++;
				find = true;
				//cout << i << " " << strlen(alphabet[j]) << " " << alphabet[j] << endl;
				i += strlen(alphabet[j])-1;
			}
				
		}
		if (!find)
		{
			//cout << i << " 1 " << word[i] << endl;
			count++;
		}
	}
	cout << count << endl;
	return 0;
}