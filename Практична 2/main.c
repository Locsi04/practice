#include <stdio.h>
int Locsi1(int a, int b) {                                               // Функція для обчислення найбільшого спільного дільника
    if (b == 0)
        return a;
    else
        return Locsi1(b, a % b);
}


int locsi2(int a, int b) {                                               // Функція для обчислення найменшого спільного кратного
    return (a * b) / Locsi1(a, b);
}

int main() {
    int n, i;
    printf("Введіть кількість чисел р: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Введіть %d натуральних чисел, розділених пробілом: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int result = numbers[0];
    for (i = 1; i < n; i++) {
        result = locsi2(result, numbers[i]);
    }

    printf("Найменше спільне кратне: %d\n", result);

    return 0;
}
