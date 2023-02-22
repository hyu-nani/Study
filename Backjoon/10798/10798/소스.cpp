#include <iostream>
#include <string.h>
using namespace std;

char bullet[16][16];
char text[500];
int main()
{
	int k = 0;
	do
	{
		cin.getline(bullet[k], 16);
		k++;
	} while (bullet[k-1][0] != '\0');
	for (int i = 0; i < 15; i++)
		for (int j = 0; j < 15; j++)
		{
			char a = bullet[i][j];
			if (a == '\0') {}
			else if (a < '0') { return 0; }
			else if (a > '9' && a < 'A') { return 0; }
			else if (a > 'Z' && a < 'a') { return 0; }
			else if (a > 'z') { return 0; }
		}
	k = 0;
	for (int i = 0; i < 15; i++)
		for (int j = 0; j < 15; j++)
			if (bullet[j][i] != '\0')
			{
				text[k] = bullet[j][i];
				k++;
			}
				
	cout << text << endl;
	return 0;
}