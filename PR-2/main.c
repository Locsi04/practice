#include <stdio.h>

int findGCD(int a, int b) {          // Функція для знаходження найбільшого спільного дільника (НСД)
    if (b == 0)
        return a;
    else
        return findGCD(b, a % b);
}

int findLCM(int a, int b) {         // Функція для знаходження найменшого спільного кратного (НСК)
    return (a * b) / findGCD(a, b);
}

int main() {
    int p;

    printf("Введіть кількість чисел p (від 2 до 20): \n");
    scanf("%d", &p);

    if (p < 2 || p > 20) {
        printf("Невірне значення p. Будь ласка, введіть значення від 2 до 20.\n");
        return 1;
    }

    int numbers[p];

    printf("Введіть %d натуральних чисел, розділених пробілом: \n", p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &numbers[i]);
    }


    int lcm = numbers[0];          // Ініціалізуємо найменше спільне кратне (НСК) першим числом


    for (int i = 1; i < p; i++) {  // Знаходимо НСК для кожної пари чисел
        lcm = findLCM(lcm, numbers[i]);
    }

    printf("Найменше спільне кратне: %d\n", lcm);

    return 0;
}
