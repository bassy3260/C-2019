#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[5];
	int x, y, result;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%s %d %d", &str, &x, &y);

	if (strcmp(str, "add") == 0)	
		result = x + y;
	else if (strcmp(str, "sub") == 0)	
		result = x - y;
	else if (strcmp(str, "mul") == 0)	
		result = x * y;
	else if (strcmp(str, "div") == 0)	
		result = x / y;

	printf("������ ���: %d", result);

	getch();
	return 0;
}