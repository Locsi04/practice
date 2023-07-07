#include<stdio.h>
int equaldivisors(int n) {                              // Ôóíêö³ÿ äëÿ ï³äðàõóíêó ê³ëüêîñò³ ð³âíèõ ä³ëüíèê³â ÷èñëà "n" 
	int count = 0;
	int t;
	for (t = 1; t <= n; t++) {                          // Ï³äáèàºìî ÷èñëà â³ä 1 äî "t" òà ïåðåâ³ðÿº ÷è "t" º ð³âíèì ä³ëüíèêîì "n"
		if (n % t == n / t) {
			count++;
		}
	}
	return count;                                       // Ïîâåðòàº ê³ëüê³ñòü ð³âíèõ ä³ëüíèê³â 
}
int main() {
	int n;

	printf("enter a natural number n: \n");             // Ââåäåííÿ çì³ííî¿ n
	scanf_s("%d", &n);
	if (n >= 150 || n <= 1) {                           // Ïåðåâ³ðêà ÷è ÷èñëî âõîäèòü â ä³àïàçîí â³ä 1 äî 150

		printf("Please enter a number from 1 to 150");  // Ó âèïàäêó ÿêùî íå âõîäèòü âèâîäèòü íà åêðàí ïîâ³äîìëåííÿ ç ïðîõàííÿì ââåñòè ÷èñëî â³ä 1 äî 150 òà çàâåðøóº ïðîãðàìó
		return 0;
	}

	int num = equaldivisors(n);                         // Âèêëèêàºìî ôóíêö³þ äëÿ ï³äðàõóíêó ê³ëüêîñò³ ð³âíèõ ä³ëüíèê³â ÷èñëà "n"

	printf("The total number of divisors of the number %d = %d", n, num);  // Âèâåäåííÿ íà åêðàí ðåçóëüòàòó 


	return 0;
}
