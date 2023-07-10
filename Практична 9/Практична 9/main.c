#include <stdio.h>
int Locsi(int x, int y) { // 2-22 ������ - ������� ��� ���������� ����������� �����
    if (x == y) {
        return 0;      // ������� ���� � ���� �, ���� ����� ���������
    }
    int steps = 0;
    int diff = y - x;

    if (diff > 0) {       // ���� ������ ����� �� 0
        if (diff % 2 == 0) {
            steps = 2;    // ���� ������ � ������ ������, �� ����� ������� 2 �����
        }
        else {
            steps = 3;    // ���� ������ � �������� ������, �� ����� ������� 3 �����
        }
    }
    else {
        steps = 1;     // ���� ������ ����� �� 0, �� ������� ������� 1 ����
    }

    return steps;
}
int main() {
    int x, y;
    printf("������ �������� x: "); // �������� �
    scanf_s("%d", &x);
    printf("������ �������� y: "); // �������� �
    scanf_s("%d", &y);

    int answer = Locsi(x, y);   // ������ ������� ���� �������� � �� �
    printf("̳�������� ������� �����: %d\n", answer); // ��������� ��������� ������� �����

    return 0;
}