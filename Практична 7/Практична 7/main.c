#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {

    int x1, y1, x2, y2, x, y, r1, r2, sumr, diffr, answer;                           // ��������� ������   
    double d;

    printf("������ ���������� ������� �1 �1 �2 �2 \n");
    scanf_s("%d %d %d %d", &x1, &y1, &x2, &y2);

    x = x2 - x1;
    y = y2 - y1;
    d = sqrt((x * x) + (y * y));

    printf("������� �������:%.6lf \n", d);
    printf("������ ���������� ������� r1; r2 \n");                      // 1-16 ������ �� �� � ��������� 6, ��� �������� � ���� �� ��� ��� ���� � 6 ������
    scanf_s("%d %d", &r1, &r2);
    diffr = abs(r1 - r2);
    sumr = r1 + r2;
    if (d < sumr) {                                                         //�������� ���� �������� ����
        if (d <= diffr) {                                                   // ������� ����
            answer = 0;
        }
        else if (d < r1 || d < r2) {
            answer = 0;                                                  // 22-25 ���� ���� �������� ������ � �� �������������
        }
        else if (d == r1 || d == r2) {
            answer = 1;                                                 // ������� �� ������
        }
        else {
            answer = 2;                                                 // ������� ���� �� � ���� �����
        }
    }
    else if (d == sumr) {
        answer = 1;                                                 // ������� �� ������ � ���� ������
    }
    else {
        answer = 0;                                                   // ���� �� �������������
    }
    printf("ʳ������ ����� ��������: %d \n", answer);                             // ��������� ������
    return 0;
}