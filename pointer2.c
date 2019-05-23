#include<stdio.h>

int main(void)
{
	int x = 10, y = 20;
	int *p;

	p = &x; //p는 x를 가리킨다
	printf("p=%d\n", p); //주소
	printf("*p = %d\n\n", *p); //x값

	p = &y; //p는 y를 가리킨다.
	printf("p=%d\n", p);	//주소
	printf("*p=%d\n", *p); //y값
	

	getch();
	return 0;
}