#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int list[10] = { 0 };
int check[10] = { 0 };

int main()
{
	int get;
	for (int i = 0; i < 10; i++)
	{
		cin >> get;
		list[i] = get % 42;
	}
	int count;
	for (int i = 0; i < 10; i++)
	{
		if (list[i] < 42)
		{
			for (int j = 0; j < 10; j++)
			{
				
			}
		}
	}
	printf("%d", count);
	return 0;
}