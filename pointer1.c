#include<stdio.h>

int main(void)
{
	int i = 3000;
	int *p = NULL; //포인터의 선언

	p = &i; //변수 i에 p의 주소를 대입

	printf("p= %u\n", p); //p가 가리키는 주소에서 데이터를 읽어온다.
	printf("&i=%u\n\n",&i);

	printf("i=%d\n", i); //포인터를 통한 간접참고
	printf("*p=%d\n", *p);

	getch();
	return 0;
}