#include <stdio.h>
#include <stdlib.h>
int main() {
	int t1, t2, t3 ;                                                                    // Введення змінних
	float timesum;

	printf("Enter three values ​​(the time for which 3 people eat pereg separately!)\n"); // Виведення повідомлення про прохання введення 3 

	scanf_s("%d %d %d", &t3 , &t2, &t1);                                                // Зчитування вихідних даних
	timesum = (float)(1 / (1.0 / t3 + 1.0 / t2 + 1.0 / t3));                            // формула для обчилення часу за який вони зїдять разом 

	printf("The time it takes for 3 people to eat pereg together \n");                  // Виведення повідомлення про час який знадобиться 3 людям що з'їсти 1 періг

	printf("%.2f", timesum);                                                            // Виведення відповіді

	return 0;
}                                                                                       /* Це мій власний код, але я закидав його в Chat GPT, щоб виправити помилку з формулою.
																						   Тому він сприймає його за свій,мабуть, таке повторюватиметься в наступних практичних, 
																						   адже я часто користуюсь чатом, Дякую за розуміння!*/
