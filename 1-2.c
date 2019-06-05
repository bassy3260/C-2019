#include<stdio.h> //문자 처리 함수들의 원형의 정의 되어 있다.
#include<ctype.h>

int main(void)
{
	int c;

	while ((c = getchar()) != EOF) //괄호에 의하여 getchar()가 반환되는 값이 먼저 c에 대입되고 c의 값이 EOF와 다른지가 검사된다.
	{						//파일의 끝이 아니면 반복, 여기서는 입력의 끝을 나타낸다.
		if (islower(c))		//islower: c가 소문자인가?
			c = toupper(c);	//소문자면 toupper을 이용해 대문자로 변환한다.  toupper: 대문자로 변환.
		putchar(c);			// putchar:c에 저장된 문자를 출력한다.
	}

	getch();
	return 0;
}