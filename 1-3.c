//539p strtok.c//
#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>

char s[] = "Man is immortal, because he has a soul";
char seps[] = " ,\t\n"; //�и��ڴ� �����̽� ���ڿ� ��ǥ, �ǹ���,�ٹٲ� �����̴�.
char *token;
 
int main(void)
{
	token = strtok(s, seps); //���ڿ����� ù��° ��ū�� ��´�.strtok: ���� s�� seps�� �̿��� �и��Ѵ�.

	while (token != NULL) //���ڿ� s�� ��ū�� �ִ� ���� �ݺ��Ѵ�.
	{
		printf(" ��ū : %s\n", token);
		token = strtok(NULL, seps); //���� ��ū�� �������� NULL�� �μ��� �ش�.
	}

	getch();
	return 0;
}