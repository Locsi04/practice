#include <stdio.h>
#include <string.h>
int fac(int t) {                //3-8 Функція для обчислення факторіалу
	if (t <= 1)
		return 1;
	else
		return t * fac(t - 1);
}
int locsi(char word[]) { //9-20 Функція для обчислення кількості анаграм, також в строці 11 масив для збереження частоти
	int lengthwords = strlen(word);
	int freq[26] = { 0 };
	int i, fact = 1;

	for (i = 0; i < lengthwords; i++) // Підрахунок частоту кожної літери
		freq[word[i] - 'A'] ++;

	for (i = 0; i < 26; i++)        // Обчислення кількості букв з врахування повторення
		fact *= fac(freq[i]);
	return fac(lengthwords) / fact; // обчислення кількості анаграм
}
int main() {
	char word[15];
	printf("Введіть слово:\n");
	scanf("%s", word); //Введення слова

	int count = locsi(word);
	printf("Кількість анаграм %d\n", count); // Виведення кількості анаграм
	return 0;
}
