#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


void my_strcpy(char *dst, char *src)
{
	for (int i = 0; src[i] != '\0'; i++)
		dst[i] = src[i];
}
int main(void)
{
	char dst[50];
	char src[50] ="C language is hard\n";
	printf("�� ����:%s", src);
	
	strcpy(dst, src);
	printf("����� ���� 1:%s", dst);

	my_strcpy(dst, src);
	printf("����� ���� 2:%s", dst);
	getch();
	return 0;
	
}
