#include<stdio.h>

int my_strlen(char *src)
{
	int i = 0;
	while (src[i] != 0)
		i++;

	return i;
}

int main(void)
{
	char src[50] = "C language is hard.";
	
	int  i = my_strlen(src);
	int j = strlen(src);
	
	printf("���ڿ��� ����:%d = ���ڿ��� ����:%d",i, j);
	
	getch();
	return 0;

}