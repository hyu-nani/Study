#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <stdio.h>
#include <cstring>
#include <queue>

using namespace std;

int test, structure, rule;
int coordinate[1000][1000];
int times[1000]; //½Ã°£
long long memo[1000];
long long totalTime(int);

int main()
{
	//read number of test
	cin >> test; 
	for (int t = 0; t < test; t++)
	{
		cin >> structure >> rule; // input number of structure & rule

		for (int j = 0; j <= rule; j++) // input each of structure delay
		{
			cin >> times[j];
		}

		int start, dest;
		vector<vector<int>> build_needed(structure + 1, vector<int>(0, 0));

		for (int j = 0; j < rule; j++)
		{
			cin >> start >> dest;
		}

		int w;
		cin >> w;
		//cal

	}
	
	return 0;
}
