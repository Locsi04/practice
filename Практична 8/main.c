#include <stdio.h>
#include <string.h>
int fac(int t) {                //3-8 ������� ��� ���������� ���������
	if (t <= 1)
		return 1;
	else
		return t * fac(t - 1);
}
int locsi(char word[]) { //9-20 ������� ��� ���������� ������� �������, ����� � ������ 11 ����� ��� ���������� �������
	int lengthwords = strlen(word);
	int freq[26] = { 0 };
	int i, fact = 1;

	for (i = 0; i < lengthwords; i++) // ϳ�������� ������� ����� �����
		freq[word[i] - 'A'] ++;

	for (i = 0; i < 26; i++)        // ���������� ������� ���� � ���������� ����������
		fact *= fac(freq[i]);
	return fac(lengthwords) / fact; // ���������� ������� �������
}
int main() {
	char word[15];
	printf("������ �����:\n");
	scanf("%s", word); //�������� �����

	int count = locsi(word);
	printf("ʳ������ ������� %d\n", count); // ��������� ������� �������
	return 0;
}
