#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char str[100];
	char *word[100];
	char *token;
	int i, count = 0;

	printf("문자열을 입력하시오: ");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = NULL;    
	token = strtok(str, " ");

	for (i = 0; token != NULL; i++) {
		word[i] = token;     
		token = strtok(NULL, " ");
		count++;
	}
	for (i = 0; i < count; i++) 
	{
		printf("%s ", word[count - i - 1]);
	}

	getch();
	return 0;
}