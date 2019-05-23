#include<stdio.h>

int main(void)
{
	int i = 10;
	int *p;
	
	p = &i; //p가 i를 가르킨다. 주소	p -> i
	printf("i=%d\n", i);

	*p = 20; //p가 가르키는 위치에 20이 저장된다.
	printf("i =%d\n", i);

	getch();
	return 0;
}