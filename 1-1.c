//520p string4.c//
#include<stdio.h>

int main(void)
{
	char str[30] = "C language is easy";
	int i = 0;

	while (str[i] != 0) //str �迭�� i��° ���ڰ� 0�� �ƴϸ� i�� ������Ű�� ������ �ݺ��϶�.
		i++;			//i��° ������ ���� 0=NULL�����̴�.
	printf("���ڿ� \"%s\"�� ���̴� %d�Դϴ�.\n", str, i);

	getch();
	return 0;
}