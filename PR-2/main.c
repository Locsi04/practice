#include <stdio.h>

int findGCD(int a, int b) {          // ������� ��� ����������� ���������� �������� ������� (���)
    if (b == 0)
        return a;
    else
        return findGCD(b, a % b);
}

int findLCM(int a, int b) {         // ������� ��� ����������� ���������� �������� �������� (���)
    return (a * b) / findGCD(a, b);
}

int main() {
    int p;

    printf("������ ������� ����� p (�� 2 �� 20): \n");
    scanf("%d", &p);

    if (p < 2 || p > 20) {
        printf("������ �������� p. ���� �����, ������ �������� �� 2 �� 20.\n");
        return 1;
    }

    int numbers[p];

    printf("������ %d ����������� �����, ��������� �������: \n", p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &numbers[i]);
    }


    int lcm = numbers[0];          // ���������� �������� ������ ������ (���) ������ ������


    for (int i = 1; i < p; i++) {  // ��������� ��� ��� ����� ���� �����
        lcm = findLCM(lcm, numbers[i]);
    }

    printf("�������� ������ ������: %d\n", lcm);

    return 0;
}
