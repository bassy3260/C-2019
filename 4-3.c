#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int get_word_count(char *str);

int main() {
	char str[100];

	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets(str);

	printf("�ܾ��� ���� %d�Դϴ�. \n", get_word_count(str));

	getch();
	return 0;
}

int get_word_count(char *str) {
	char *token;
	int count = 1;

	token = strtok(str, " ");
	if (token) {
		while (token = strtok(NULL, " "))
			count++;
	}
	return count;
}

