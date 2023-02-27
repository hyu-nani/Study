/*
����
�־��� �� N�� �߿��� �Ҽ��� �� ������ ã�Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù �ٿ� ���� ���� N�� �־�����. N�� 100�����̴�. �������� N���� ���� �־����µ� 
���� 1,000 ������ �ڿ����̴�.

���
�־��� ���� �� �Ҽ��� ������ ����Ѵ�.

���� �Է� 1
10
1 2 3 5 7 11 13 17 19 23
���� ��� 1
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