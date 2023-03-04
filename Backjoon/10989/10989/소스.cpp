/*
문제
N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

입력
첫째 줄에 수의 개수 N(1 ≤ N ≤ 10,000,000)이 주어진다. 
둘째 줄부터 N개의 줄에는 수가 주어진다.
이 수는 10,000보다 작거나 같은 자연수이다.

출력
첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.

예제 입력 1
10
5
2
3
1
4
2
3
5
1
7
예제 출력 1
1
1
2
2
3
3
4
5
5
7
*/
#include <iostream>

using namespace std;

int comp(const void* a, const void* b) 
{ 
	return (*(int*)a - *(int*)b); 
}

int list[10001];

int main()
{
	int n;
	cin >> n;
	if (n < 1 || 10000000 < n)
		return 0;
	for (int i = 0; i < n; i++)
	{
		cin >> list[i];
		if (list[i] > 10000)
			return 0;
	}	
	qsort(list, n, sizeof(int), comp);
	for (int i = 0; i < n; i++)
		cout << list[i] << '\n';
	return 0;
}