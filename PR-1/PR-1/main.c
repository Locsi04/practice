#include <stdio.h>
#include <stdlib.h>
int main() {
    int t1, t2, t3;
    double total_time; // ����� double, �� ����� ����� ���� � ���� ����� ������� //
    printf("������ ��� ��������(��� �� ���� 3 ������ ������ ���� ������!)\n");

    scanf_s("%d %d %d", &t1, &t2, &t3); // ���������� ������� ����� //

    total_time = (double)(1 / (1.0 / t1 + 1.0 / t2 + 1.0 / t3)); // ���������� ���������� ���� //

    printf("���, �� ���� 3 ������ ����� ���� �����\n");
    printf("%.2f\n", total_time); // ��������� ���������� //

    return 0;
}
