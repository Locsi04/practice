#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {

    int x1, y1, x2, y2, x, y, r1, r2, sumr, diffr, answer;                           // Додавання змінних   
    double d;

    printf("Введіть координати вектора х1 у1 х2 у2 \n");
    scanf_s("%d %d %d %d", &x1, &y1, &x2, &y2);

    x = x2 - x1;
    y = y2 - y1;
    d = sqrt((x * x) + (y * y));

    printf("Довжина вектора:%.6lf \n", d);
    printf("Введіть координати вектора r1; r2 \n");                      // 1-16 строки це ще з практичної 6, але відмінність в тому що тут нові змінні в 6 строці
    scanf_s("%d %d", &r1, &r2);
    diffr = abs(r1 - r2);
    sumr = r1 + r2;
    if (d < sumr) {                                                         //перевірка умов перетину кола
        if (d <= diffr) {                                                   // Перетин кола
            answer = 0;
        }
        else if (d < r1 || d < r2) {
            answer = 0;                                                  // 22-25 Якщо коло всередині іншого і не перетинаються
        }
        else if (d == r1 || d == r2) {
            answer = 1;                                                 // Перетин кіл назовні
        }
        else {
            answer = 2;                                                 // Перетин двох кіл у довх точка
        }
    }
    else if (d == sumr) {
        answer = 1;                                                 // Перетин кіл назовні в двох точках
    }
    else {
        answer = 0;                                                   // Кола не перетинаються
    }
    printf("Кількість точок перетину: %d \n", answer);                             // виведення відповіді
    return 0;
}