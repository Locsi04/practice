#include <stdio.h>
#include <math.h>
int main() {

	int x1, y1, x2, y2, x, y;                              // ����� ���� � �� � ����, �� ����� � 13 ������ ����� �� ���� ������ � ^2
	double locsi;

	printf("������ ���������� ������� �1 �1 �2 �2 \n");
	scanf_s("%d %d %d %d", &x1, &y1, &x2, &y2);              // �������� �� ���������� ������

	x = x2 - x1;                                           //������ �������
	y = y2 - y1;
	locsi = sqrt((x * x) + (y * y));

	printf("������� �������:%.6lf \n", locsi);             //��������� ����������

	return 0;
}