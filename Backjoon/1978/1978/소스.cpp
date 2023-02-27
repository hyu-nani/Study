/*
문제
주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.

입력
첫 줄에 수의 개수 N이 주어진다. N은 100이하이다. 다음으로 N개의 수가 주어지는데 
수는 1,000 이하의 자연수이다.

출력
주어진 수들 중 소수의 개수를 출력한다.

예제 입력 1
10
1 2 3 5 7 11 13 17 19 23
예제 출력 1
9
*/
#include <iostream>

using namespace std;

int number[101];

int main()
{
	int N;
	cin >> N;
	if (N > 100)
		return 0;
	for (int t = 0; t < N; t++)
	{
		cin >> number[t];
		if (number[t] > 1000)
			return 0;
	}
	int cnt = 0;
	for (int i = 0; number[i] != '\0'; i++)
	{
		bool decimal = true;
		for (int j = 2; j < number[i]; j++)
			if (number[i] % j == 0)
				decimal = false;
		if (decimal && number[i] != 1)
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}