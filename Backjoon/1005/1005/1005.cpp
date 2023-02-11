#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <stdio.h>
#include <cstring>

using namespace std;

int n, structure, rule;
int coordinate[1000][1000];
int times[1000]; //시간
long long memo[1000];
long long totalTime(int);

int main()
{
	cin >> n; //test case number

	for (int i = 0; i < n; i++)
	{
		//input 
		memset(coordinate, 0, sizeof(coordinate));
		memset(times, 0, sizeof(times));
		memset(memo, -1, sizeof(memo));

		cin >> structure >> rule; // input number of structure & rule

		for (int j = 0; j < rule; j++) // input each of structure delay
		{
			cin >> times[j];
		}

		int start, dest;

		for (int j = 0; j < rule; j++)
		{
			cin >> start >> dest;
			coordinate[start][dest] = 1;
		}

		int w;
		cin >> w;
		
		//cal

		cout << totalTime(w) << endl;
	}
	
	return 0;
}

/**
* 전체 시간을 계산하기 위한 함수
*/
long long totalTime(int cur)
{
	if (memo[cur] != -1) 
		return memo[cur];
	long long curTime = 0;
	for (int i = 0; i <= structure; i++) 
	{
		if (coordinate[i][cur])
		{
			curTime = max(curTime, totalTime(i)); 
		}
	}
	return memo[cur] = curTime + times[cur];
}