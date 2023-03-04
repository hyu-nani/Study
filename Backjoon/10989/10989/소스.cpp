/*
����
N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ���� ���� N(1 �� N �� 10,000,000)�� �־�����. 
��° �ٺ��� N���� �ٿ��� ���� �־�����.
�� ���� 10,000���� �۰ų� ���� �ڿ����̴�.

���
ù° �ٺ��� N���� �ٿ� ������������ ������ ����� �� �ٿ� �ϳ��� ����Ѵ�.

���� �Է� 1
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
���� ��� 1
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