/*
����
� ���� n�� �ڽ��� ������ ��� ������� �հ� ������, �� ���� ��������� �Ѵ�.
���� ��� 6�� 6 = 1 + 2 + 3 ���� �������̴�.
n�� ���������� �ƴ��� �Ǵ����ִ� ���α׷��� �ۼ��϶�.

�Է�
�Է��� �׽�Ʈ ���̽����� �� �� �������� n�� �־�����. (2 < n < 100, 000)
�Է��� �������� -1�� �־�����.

���
�׽�Ʈ���̽� ���� ���ٿ� �ϳ��� ����ؾ� �Ѵ�.
n�� ���������, n�� n�� �ƴ� ������� ������ ��Ÿ���� ����Ѵ�(���� ��� ����).
�̶�, ������� ������������ �����ؾ� �Ѵ�.
n�� �������� �ƴ϶�� n is NOT perfect. �� ����Ѵ�.

���� �Է� 1
6
12
24
28
-1
���� ��� 1
6 = 1 + 2 + 3
12 is NOT perfect.
24 is NOT perfect.
28 = 1 + 2 + 4 + 7 + 14
*/
#include <iostream>

using namespace std;

int factors[10];

int main()
{
	int n;
	cin >> n;
	while (n > 2 && n < 100000)
	{
		int cnt = 0;
		cout << n;
		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				factors[cnt] = i;
				cnt++;
			}
		}
		int total = 0;
		for (int i = 0; i < cnt; i++)
			total += factors[i];
		if (total == n)
		{
			cout << " = 1";
			for (int i = 1; i < cnt; i++)
				cout << " + " << factors[i];
			cout << endl;
		}
		else
		{
			cout << " is NOT perfect." << endl;
		}
		cin >> n;
	} 
	return 0;
}