#include <stdio.h>
#include <math.h>
int main() {

	int x1, y1, x2, y2, x, y;                              // Додав змінні х та у тому, що корінь в 13 строці корінь не хотів робити з ^2
	double locsi;

	printf("Введіть координати вектора х1 у1 х2 у2 \n");
	scanf_s("%d %d %d %d", &x1, &y1, &x2, &y2);              // Введення та сканування змінних

	x = x2 - x1;                                           //Основні формули
	y = y2 - y1;
	locsi = sqrt((x * x) + (y * y));

	printf("Довжина вектора:%.6lf \n", locsi);             //Виведення результату

	return 0;
}