#include <stdio.h>
#include <iostream>

using namespace std;
int list[100] = { 0 };
int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> list[i];
	}
	int find, count=0;
	cin >> find;
	for (int i = 0; i < N; i++)
	{
		if (list[i] == find)
			count++;
	}
	printf("%d", count);
	return 0;
}