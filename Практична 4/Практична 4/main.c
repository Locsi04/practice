#include<stdio.h>
int equaldivisors(int n) {                              // Функція для підрахунку кількості рівних дільників числа "n" (взяв з Chat GPT, але переробив під свій варіант)
	int count = 0;
	int t;
	for (t = 1; t <= n; t++) {                          // Підбиаємо числа від 1 до "t" та перевіряє чи "t" є рівним дільником "n"
		if (n % t == n / t) {
			count++;
		}
	}
	return count;                                       // Повертає кількість рівних дільників 
}
int main() {
	int n;

	printf("enter a natural number n: \n");             // Введення змінної n
	scanf_s("%d", &n);
	if (n >= 150 || n <= 1) {                           // Перевірка чи число входить в діапазон від 1 до 150

		printf("Please enter a number from 1 to 150");  // У випадку якщо не входить виводить на екран повідомлення з проханням ввести число від 1 до 150 та завершує програму
		return 0;
	}

	int num = equaldivisors(n);                         // Викликаємо функцію для підрахунку кількості рівних дільників числа "n"

	printf("The total number of divisors of the number %d = %d", n, num);  // Виведення на екран результату 


	return 0;
}