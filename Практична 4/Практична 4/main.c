#include<stdio.h>
int equaldivisors(int n) {                              // ������� ��� ��������� ������� ����� ������� ����� "n" (���� � Chat GPT, ��� ��������� �� ��� ������)
	int count = 0;
	int t;
	for (t = 1; t <= n; t++) {                          // ϳ������ ����� �� 1 �� "t" �� �������� �� "t" � ����� �������� "n"
		if (n % t == n / t) {
			count++;
		}
	}
	return count;                                       // ������� ������� ����� ������� 
}
int main() {
	int n;

	printf("enter a natural number n: \n");             // �������� ����� n
	scanf_s("%d", &n);
	if (n >= 150 || n <= 1) {                           // �������� �� ����� ������� � ������� �� 1 �� 150

		printf("Please enter a number from 1 to 150");  // � ������� ���� �� ������� �������� �� ����� ����������� � ��������� ������ ����� �� 1 �� 150 �� ������� ��������
		return 0;
	}

	int num = equaldivisors(n);                         // ��������� ������� ��� ��������� ������� ����� ������� ����� "n"

	printf("The total number of divisors of the number %d = %d", n, num);  // ��������� �� ����� ���������� 


	return 0;
}