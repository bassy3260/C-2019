//539p strtok.c//
#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>

char s[] = "Man is immortal, because he has a soul";
char seps[] = " ,\t\n"; //분리자는 스페이스 문자와 쉼표, 탭문자,줄바꿈 문자이다.
char *token;
 
int main(void)
{
	token = strtok(s, seps); //문자열에서 첫번째 토큰을 얻는다.strtok: 문자 s를 seps를 이용해 분리한다.

	while (token != NULL) //문자열 s에 토큰이 있는 동안 반복한다.
	{
		printf(" 토큰 : %s\n", token);
		token = strtok(NULL, seps); //다음 토큰을 얻으려면 NULL을 인수로 준다.
	}

	getch();
	return 0;
}