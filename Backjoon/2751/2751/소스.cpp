/*
����
N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ���� ���� N(1 �� N �� 1,000,000)�� �־�����. 
��° �ٺ��� N���� �ٿ��� ���� �־�����. 
�� ���� ������ 1,000,000���� �۰ų� ���� �����̴�. 
���� �ߺ����� �ʴ´�.

���
ù° �ٺ��� N���� �ٿ� ������������ ������ ����� �� �ٿ� �ϳ��� ����Ѵ�.

���� �Է� 1
5
5
4
3
2
1
���� ��� 1
1
2
3
4
5
*/
#include <iostream>

using namespace std;

int list[1000001];

int comp(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b); //��������
}

int main()
{
	int n;
	cin >> n;
	if (n < 1 || 1000000 < n)
		return 0;
	for (int i = 0; i < n; i++)
	{
		cin >> list[i];
		if (abs(list[i]) > 1000000)
			return 0;
	}
	qsort(list, n, sizeof(int), comp);
	for (int i = 0; i < n; i++)
		cout << list[i] << '\n';
}