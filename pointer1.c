#include<stdio.h>

int main(void)
{
	int i = 3000;
	int *p = NULL; //�������� ����

	p = &i; //���� i�� p�� �ּҸ� ����

	printf("p= %u\n", p); //p�� ����Ű�� �ּҿ��� �����͸� �о�´�.
	printf("&i=%u\n\n",&i);

	printf("i=%d\n", i); //�����͸� ���� ��������
	printf("*p=%d\n", *p);

	getch();
	return 0;
}