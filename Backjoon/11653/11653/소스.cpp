/*
����
���� N�� �־����� ��, ���μ������ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ���� N (1 �� N �� 10,000,000)�� �־�����.

���
N�� ���μ����� ����� �� �ٿ� �ϳ��� ������������ ����Ѵ�.
N�� 1�� ��� �ƹ��͵� ������� �ʴ´�.

���� �Է� 1
72
���� ��� 1
2
2
2
3
3
���� �Է� 2
3
���� ��� 2
3
���� �Է� 3
6
���� ��� 3
2
3
���� �Է� 4
2
���� ��� 4
2
���� �Է� 5
9991
���� ��� 5
97
103
*/
#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	if (1 >= N || N > 10000000)
		return 0;
	for (int division = 2; N != division; )
	{
		if (N % division == 0)
		{
			cout << division << endl;
			N /= division;
		}
		else
			division++;
	}
	cout << N << endl;
	return 0;
}