//520p string4.c//
#include<stdio.h>

int main(void)
{
	char str[30] = "C language is easy";
	int i = 0;

	while (str[i] != 0) //str 배열의 i번째 문자가 0이 아니면 i를 증가시키는 연산을 반복하라.
		i++;			//i번째 문자의 값이 0=NULL문자이다.
	printf("문자열 \"%s\"의 길이는 %d입니다.\n", str, i);

	getch();
	return 0;
}