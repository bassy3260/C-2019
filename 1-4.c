// 545p stringarray1.c //
#include<stdio.h>

int main(void)
{
	int i;
	char menu[5][10] = //2차원 문자배열 menu[][]를 생성하고 5개의 문자열로 초기화한다.
	{
		"init",
		"open",
		"close",
		"read",
		"write"
	};

	for (i = 0; i < 5; i++) //반복 루프를 이용하여 각각의 문자열을 화면에 출력한다.
		printf("%d 번째 메뉴: %s \n", i, menu[i]); //i번째 문자열

	getch();
	return 0;
}