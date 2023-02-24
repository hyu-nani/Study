/*
����
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� A�� B�� �־�����. (0 < A,B < 1010000)

���
ù° �ٿ� A+B�� ����Ѵ�.
*/

#include <iostream>
#include <string.h>

using namespace std;

char A[100002], B[100002], C[100003];
void reverse(char* arr) //���ڿ� ��ȯ
{
	int length = strlen(arr) - 1;
	char a;
	for (int i = 0; i <= int(length / 2); i++)
	{
		a = arr[0 + i];
		arr[0 + i] = arr[length - i];
		arr[length - i] = a;
	}
}
int main()
{
	cin >> A >> B;
	int maxlen;
	if (strlen(A) > strlen(B))
		maxlen = strlen(A);
	else
		maxlen = strlen(B);
	reverse(A);
	reverse(B);
	
	int carry = 0;
	for (int k = 0; k < maxlen; k++)
	{
		if (A[k] == '-' || B[k] == '-')
			return 0;
		int count = (A[k] != '\0'&& B[k] != '\0') ? 1 : 0;
		if (A[k] + B[k] - '0' * count == '9' && carry == 1)
		{
			C[k] = '0';
		}
		else if (A[k] + B[k] - '0' * (1+count) < 10)
		{
			C[k] = A[k] + B[k] - '0' * count + carry;
			carry = 0;
		}
		else
		{
			C[k] = A[k] + B[k] - '0' * count - 10 + carry;
			carry = 1;
		}
	}
	if (carry == 1)
		C[strlen(C)] = '1';
	reverse(C);
	cout << C << endl;
	return 0;
}

