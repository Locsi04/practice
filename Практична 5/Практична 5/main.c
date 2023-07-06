#include<stdio.h>
int locsi04(int n) {                          // Функція для обчилення кількості послідовності "n"
	int x = 1, y = 2, z=4, i, sum;
	if (n == 1)
		return x;
	if (n == 2)
		return y;
	if (n == 3)
		return z;
	for (i = 4; i <= n; i++) {
		sum = (x + y + z) % 12345 ;
		x = y;
		y = z;
		z = sum;
	}
	return sum;                               // Повертає результат підрахунку
}
int main(){
	int n;                                    // Додавання змінної "n"
	printf("Enter the length of the sequence n\n");                        // Введення змінної "n"
	scanf_s("%d", &n);

	if (n >= 10000 || n <= 1) {               // встановлюємо діапазон
		printf("Please enter a number from 1 to 10000");

		return 0;
	}
	int count = locsi04(n);
	printf("Number of searched sequences: %d\n", count);            // Виводимо відповідь за модулем

	return 0;
}